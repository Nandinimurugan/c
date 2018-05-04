

	void main( )
	{
	int i , age , sum=0, salary;
		
	clrscr();

	printf("Enter 10 persons age \n");

	for(i=1; i<=10; i++)
	{
	printf("Enter ur age\n");
	 scanf("%d", &age );	
	 if( age < 18 ) continue;
	
	 printf("Enter your salary\n");
	 scanf("%d", &salary);
	 sum = sum + salary;
	}

	printf("\nSum of salary = %d\n", sum);

	getch();
	}