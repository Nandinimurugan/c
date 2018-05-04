

/* Program to print number 100..1 in reverse order */


	void main( )
	{	
	int num;

	clrscr();

	num = 100;

up:
	printf("%d\t", num );

	num--;
	
	if( num >= 1) goto up;

	getch();
	}
