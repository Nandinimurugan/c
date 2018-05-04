

/* Program to print number 1..10 */


	void main( )
	{	
	int num;

	clrscr();

	num = 1;

up:
	printf("%d\t", num );

	++num;
	
	if( num<=10 ) goto up;

	getch();
	}
