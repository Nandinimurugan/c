

	void main( )	
	{
	 int num , rev=0;

	 clrscr();

	 printf("Enter number \n");
	 scanf("%d", &num );

	 while( num != 0 )
	 {
	  rev = rev * 10 + num%10;
	  num = num/10;
	 }

	 printf("Reverse = %d\n", rev);

	 getch();
	}
	