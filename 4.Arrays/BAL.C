
void main()
{
 float bal[100] , sum , avg , outbal5k , outbal;
 int n , i;

 clrscr();
 printf("Enter customers count(1-100)\n");
 scanf("%d", &n );

 printf("Enter %d customers outstanding balance\n", n );
 for(i=0; i<n; i++)
  scanf("%f", &bal[i]);
	
	
	sum = outbal5k = outbal = 0;

	for(i=0; i<n; i++)
	{
	 sum += bal[i];

		if( bal[i] > 5000 )
			outbal5k += bal[i];

		else
			outbal += bal[i];
	}

	avg = sum / n;

	printf("Total amount = %.2f\n", sum );
	printf("Outstanding balance more than 5000 = %.2f\n", outbal5k );
	printf("Outstanding balance less than 5000 = %.2f\n", outbal );
	printf("Average = %.2f\n", avg );


	getch();
}
	
	

	
	

  