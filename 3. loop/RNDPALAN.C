
	#include<stdlib.h>
	#include<conio.h>
	void main( )
	{
			int num , temp , rev;

			randomize();

			clrscr();

			while( !kbhit() )
			{
				num = 1000 + random( 9000 );
				temp = num;

				rev = 0;
				while( num != 0 )
				{
				 rev = rev * 10 + num % 10;
				 num = num / 10;
				}

				if( temp == rev )
				{
				   printf("%d\n", temp);
				   sleep( 2 );
				}

			}

	}
