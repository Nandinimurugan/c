
	#include<stdlib.h>

	void main( )
	{
	int i , decide;

	randomize();

	clrscr();

	printf("OTP generated\n");

	for(i=1; i<=8; i++)
	{

	  decide = random( 2 );
	  if( decide == 0 )
	   printf("%c", random(26)+65);
	 else
  	   printf("%d", random(10));
	}

	getch();
	}