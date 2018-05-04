

	void main( )
	{
		int num , s;
		clrscr();
		printf("Enter number \n");
		scanf("%d",&num);
	 up:
		s=0;
		while( num != 0 )
		{
		 s = s + num % 10;
		 num = num / 10;
		}

		if( s > 9 )
		{
		   num = s;
		   goto up;
		}

		printf("Sum of digits = %d\n", s);
		getch();
	}