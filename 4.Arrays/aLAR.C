
	void main( )	
	{
	int a [ 100 ] , n , i , lar;

	clrscr();

	printf("Enter value for n ( 1-100 )\n");
	scanf("%d", &n );

	printf("Enter %d elements\n" , n );	
	for(i=0; i<n; i++)
	 scanf("%d", &a[i]);

	lar = a[0]; // assume 1st element is largest
	
	for(i=1; i<n; i++)
	{
	  if( a[i] > lar ) 
		lar = a[i];
	}

	printf("Largest = %d\n", lar );

	getch();
	}

	