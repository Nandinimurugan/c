	#include<math.h>

	void main()
	{
	int num , i , ir;
	char isDivided;
	clrscr();
	printf("Enter number \n");
	scanf("%d", &num);
	ir = sqrt( num );

	isDivided = 'N';
	for(i=2; i<=ir ; i++)
	{
	  if( num % i == 0 )
	  {
	    isDivided = 'Y';
	    break;
	  }
	}
	if( isDivided == 'Y' )	
	  printf("Not a prime\n");
	else
	  printf("It is prime\n");

	printf("Further part of the program\n");
	printf("Further part of the program\n");
	printf("Further part of the program\n");
	printf("Further part of the program\n");
	printf("Further part of the program\n");

	getch();
	}