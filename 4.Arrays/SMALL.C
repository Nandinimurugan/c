
	void main( )	
	{
	int a [ 100 ] , n , i , small;

	clrscr();

	printf("Enter value for n ( 1-100 )\n");
	scanf("%d", &n );

	printf("Enter %d elements\n" , n );	
	for(i=0; i<n; i++)
	 scanf("%d", &a[i]);

	small = a[0]; // assume 1st element is smallest
	
	for(i=1; i<n; i++)
	{
	  if( a[i] < small )
		small = a[i];
	}

	printf("Smallest = %d\n", small );

	getch();
	}

	