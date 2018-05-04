

	void main()
	{
	
	int cost[] = {1200,9000,1500,400,1000};
	int pcode, qty, total;


	clrscr();
	printf("-------Products list----------\n");
	printf("0. PS3 Joystick \n");
	printf("1. Mobile \n");	
	printf("2. Music player\n");
	printf("3. Storage device\n");
	printf("4. Bluetooth headset \n");
	printf("-------------------------------\n");

	printf("Enter choice\n");
	scanf("%d", &pcode );

	if( pcode < 0 || pcode > 4 )
	printf("Sorry invalid product code\n");
	else
	{
	  printf("Unit Cost =%d",cost[pcode]);
	  printf("Enter quantity \n");	
	  scanf("%d", &qty );
	  total = cost [ pcode ] * qty;
	
	  printf("Unit cost = %d\n", cost[ pcode ] );
	  printf("Quantity  = %d\n", qty );
	  printf("Total     = %d\n", total );
	}

	getch();
	}






