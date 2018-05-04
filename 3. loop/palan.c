

	void main( )	
	{
	 int num , rev=0 , temp;

	 clrscr();

	 printf("Enter number \n");
	 scanf("%d", &num );

	 temp = num;

	 while( num != 0 )
	 {
	  rev = rev * 10 + num%10;
	  num = num/10;
	 }
 			
	 if( rev == temp )
	  printf("Palandrome \n");
	else
	  printf("Not a palandrome");

	 getch();
	}
	