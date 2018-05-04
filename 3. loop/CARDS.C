

	#include<stdlib.h>

	void main()
	{

	int i , d , card;

	clrscr();

	randomize();

	for(card=1; card<=20000; card++)
	{

	for(i=1; i<=16; i++)
	{
	  d = random( 10 );

	  printf("%d", d );

	  if( i % 4 == 0 && i < 16 ) printf("-");
	}

	printf("\n");

	}
	getch();
	}
