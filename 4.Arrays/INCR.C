
	void main( )	
	{
	int a [ 100 ] , n , i , x;

	clrscr();

	printf("Enter value for n ( 1-100 )\n");
	scanf("%d", &n );

	printf("Enter %d elements\n" , n );	
	for(i=0; i<n; i++)
	 scanf("%d", &a[i]);

	x = a[0];
	for(i=0; i<n; i++)
	a[i] = a[i] + x;
	
	printf("\nAfter increment \n");
	for(i=0; i<n; i++)
	printf("%d\t", a[i] );


	getch();
	}

	

	