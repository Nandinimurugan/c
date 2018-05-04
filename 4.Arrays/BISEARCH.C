
	#include<stdlib.h>

	void main( )	
	{
	int a[1000] , i , j, t , n , low , high , mid , x , c=0;

	clrscr();

	printf("Enter n ( 1-1000 )\n");
	scanf("%d", &n);

	randomize();

	for(i=0; i<n; i++)
	a[i] = random( 5000 );

	for( i=0; i<n-1; i++)
	{
	  for(j=i+1; j<n; j++)
	  {
		if( a[i] > a[j])
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	  }
	}

	printf("After sorting\n");
	for(i=0; i<n; i++)
	printf("%d\t", a[i] );

	printf("Enter element to search \n");
	scanf("%d" , &x );

	low = 0;
	high = n-1;	
	do
	{

	 mid = ( low + high )/ 2;
	 c++;

	 if( a[mid] == x )
	 {
	  printf("Search successfull , element found at position %d\n", mid );
	  printf("Total iterations : %d \n", c );
	  getch();
	  return;
	 }
	 
	 if( a[mid] > x )
	   high = mid-1;
	 else
	  low = mid+1;
	}

	while( low <= high );

	printf("Sorry element not found.");

	getch();
	}
	


	














