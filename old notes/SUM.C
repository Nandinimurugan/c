
	
	void main( )
	{
	int num , sum , i ;
	float avg;

	clrscr();

	printf("Enter 10 numbers\n");

	for(i=1 , sum=0 ; i<=10; i++)
	{
	 scanf("%d", &num);
	 sum = sum + num;	
	}

	printf("Sum = %d\n", sum );
	avg = sum/10.0;
	
	printf("Sum of numbers = %d\n",sum);
	printf("Average = %f", avg);

	getch();
	}
	



