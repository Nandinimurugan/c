	#include<math.h>

	void main()
	{
	int num , i , ir;
	clrscr();

	printf("Enter number \n");
	scanf("%d", &num);

	ir = sqrt( num );

	for(i=2; i<=ir ; i++)
	{
	  if( num % i == 0 )
	  {
	    printf("It is not a prime\n");
	    getch();
	    return;
	  }
	}

	printf("It is prime");

	getch();
	}
