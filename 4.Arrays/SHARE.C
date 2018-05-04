

	#include<stdlib.h>

	void main( )
	{
	 long int invamt , alloc[5] , amt , value[5];
	 int i;

	 clrscr();
	 randomize();

	 printf("Enter invamt \n");
	 scanf("%ld", &invamt );

	 printf("Please enter allocation for 5 different companies \n");

	for(i=0; i<=4; i++)
	{
	  scanf("%ld", &amt );

	  if( invamt - amt < 0 )
	  {
	  printf("Sorry , reduce allocation amount\n");
	  --i;
	  }
	  else
	  {
	    alloc [ i ] = amt;
	    invamt = invamt - amt;
	  }
	}

	printf("Initial allocation \n");
	for(i=0; i<=4; i++)	
	printf("%ld\n", alloc[i] );

	printf("After gain , now the allocations are\n");
	for(i=0; i<=4; i++)
	{
	  value[i] = random( 10000 );
	  alloc[i] = alloc[i] + value[i];
	  printf("%ld\n", alloc[i] );
	}


	getch();
	}	 
	