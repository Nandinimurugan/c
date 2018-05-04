
	void main( )	
	{
	int marks[10] , sum=0 , i;
	float avg;
	
	clrscr();
	printf("Enter 10 students thier marks secured\n");
	for(i=0; i<=9; i++)	
	{
	 scanf("%d", &marks[i] );
	 sum = sum + marks[i];
	}

	avg = sum/10.0;

	clrscr();
	printf("Students marks list \n");
	for(i=0; i<=9; i++)	
	printf("%d\n", marks[i] );

	printf("Sum = %d\n", sum );
	printf("Average = %f\n", avg );

	getch();
	}

	


	

