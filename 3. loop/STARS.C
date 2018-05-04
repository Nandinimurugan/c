

	#include<stdlib.h>
	#include<conio.h>

	void main()
	{

	 int x , y , i , color;
	 clrscr();
	 randomize();

	 for( i=1; i<=100; i++)
	 {
	   x     = random( 80 );
	   y     = random( 24 );
	   color = random( 15 );

	   gotoxy( x , y );
	   textcolor( color );
	   cprintf("*");
	 }
	 getch();
	 }
