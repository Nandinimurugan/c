
	#include<conio.h>
	#include<dos.h>

	void main( )
	{
	int hour , min , sec;

	clrscr();
	printf("Enter start time\n");
	scanf("%d:%d:%d", &hour , &min ,&sec);
	clrscr();

	while( !kbhit() )
	{
	  sec++;
	  if( sec == 60 )
	  {
		sec=0;
		min++;
	  }

	  if( min == 60 )	
	  {
		min = 0;
		hour++;
	  }
	
	  if( hour == 24 )
	  {
		hour = 0;
	  }
		
	  gotoxy ( 60 , 2 );
	  printf("%2d:%2d:%2d", hour , min , sec);


	  sleep(1);
	}


	}