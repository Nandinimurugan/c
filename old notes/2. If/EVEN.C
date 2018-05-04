

/* Program to print even number upto..200 */


	void main( )
	{	
	int num;

	clrscr();

	num = 2;

up:
	printf("%d\t", num );

	num+=2;
	
	if( num<=200 ) goto up;

	getch();
	}
