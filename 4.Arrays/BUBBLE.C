

	void main( )	
	{
	int a[100] , i , j, t , n;

	clrscr();

	printf("Enter n ( 1-100 )\n");
	scanf("%d", &n);

	printf("\n Enter elements \n");
	for(i=0; i<n; i++)
	scanf("%d", &a[i] );

	for( i=1; i<n; i++)
	{
	  for(j=0; j<n-i; j++)
	  {
		if( a[j] > a[j+1])
		{
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
		}
	  }
	}

	printf("After sorting\n");
	for(i=0; i<n; i++)
	printf("%d\t", a[i] );

	getch();
	}