

	#include<stdlib.h>
	#include<conio.h>

	void main()
	{	
	int a[100],i , n , x , c=0;

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


	for(i=0; i<n; i++)
	{
		if( a[i] == x )
		{
		  c++;
		  textcolor(GREEN);
		  cprintf("%d ", a[i]);
		}
		else
		{
		  textcolor( WHITE );
		  cprintf("%d ", a[i] );
		}
	}

	if( c == 0 )
	  printf("Element not found");
	else
	 printf("Count of occurances = %d", c );

	getch();
	}

	
	
		
	
	