

	void main( )	
	{
	int a[100] , i , j, t , n;

	clrscr();

	printf("Enter n ( 1-100 )\n");
	scanf("%d", &n);

	printf("\n Enter elements \n");
	for(i=0; i<n; i++)
	scanf("%d", &a[i] );

	for( i=0; i<n-1; i++)
	{
	  for(j=i+1; j<n; j++)
	  {
		if( a[i] < a[j])
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

	getch();
	}