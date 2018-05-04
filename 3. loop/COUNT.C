
	
			void main( )
			{
				int score , i , dc , fc;
			
				dc = fc = 0;
				clrscr();

				printf("Enter 10 subjects score\n");

				for(i=1; i<=10; i++)
				{
					scanf("%d", &score);
					if( score >= 80 ) dc++;
					if( score < 35 ) fc++;
				}
			
				printf("Score >=80 is %d\n", dc);
				printf("Fail count is %d\n", fc);

				getch();
			}


