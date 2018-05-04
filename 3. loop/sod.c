

			void main( )
			{ 
				int num , s=0;
				clrscr();
				printf("Enter number \n");
				scanf("%d",&num);

				while( num != 0 )
				{
					 s = s + num % 10;
					 num = num / 10;
				}

				printf("Sum of digits = %d\n", s);
				getch();
			}