

		
			#include<stdlib.h>

			void main( )
			{
				int numgen , guess , i;

				randomize();
				numgen = random( 100 );

				clrscr();

				printf("U have 6 attempts to guess number range ( 0 - 100 ) , -1 to quit \n");

				for( i=1; i<=6; i++)
				{
					printf("Enter %d attempt \n", i);
					scanf("%d", &guess );
					if( guess == -1 ) break;


					if( guess == numgen )
					{
					 printf("Hip Hip Hurry !!! , u won the game\n");
					 return;
					}

					if( guess < numgen && i<=5 )
					printf("Try some greater number\n");
					
					if( guess > numgen && i<= 5)
					printf("Try some lesser number\n");
				}

				printf("Sorry u lost the game , correct number is %d\n", numgen);

				getch();
			}



