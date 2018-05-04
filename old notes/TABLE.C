

	void main( )
	{
	int num , i;

	clrscr();
	printf("Enter number \n");
	scanf("%d", &num);

	for(i=1; i<=10; i++)
	{
	 printf("%d x %d = %d\n", num,i,num*i);
	}

	getch();
	}