

	#include<stdlib.h>	

	void main()
	{	
	int a[100],i , n , x , pos;

	clrscr();
	printf("Enter value for n \n");
	scanf("%d", &n);
	
	randomize();

	printf("Array elements as follows \n");
	for(i=0;i<n; i++)
	{
	 a[i] = random( 1000 )+1;
	 printf("%d\t", a[i]);
	}
	
	printf("Enter element to search \n");
	scanf("%d", &x);

	pos = -1;

	for(i=0; i<n; i++)
	{
		if( a[i] == x )
		{
		  pos = i;
		  printf("Found at position = %d\n", pos+1 );
		}
	}

	if( pos == -1 )
	  printf("Not found...");

	
	getch();
	}

	
	
		
	
	