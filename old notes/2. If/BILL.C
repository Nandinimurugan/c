

	void main( )
	{
	int pmr , cmr , units ;
	float total;

	clrscr();
	printf("Enter previous meter reading\n");
	scanf("%d", &pmr);

	printf("Enter current meter reading\n");
	scanf("%d", &cmr);

	units = cmr - pmr;	

	if( units <=250 )	
		total = 300;

	else if( units >250 && units<=350 )
		total = 300 + (units-250)*0.80;

	else if( units > 350 && units <= 450 )
		total = 380 + (units-350)*1.20;

	else			
		total = 500 + ( units - 450)*2.0;

	printf("----------Bill details as follows------------\n");
	printf("Previous meter reading  : %d\n", pmr );
	printf("Current  meter reading  : %d\n", cmr );
	printf("Units consumed          : %d\n", units);
	printf("Total amount to pay     : %.2f\n", total);
	printf("-----------------------------------------------\n");


	getch();
	}
	
	


	



