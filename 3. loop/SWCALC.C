
	void main()
	{

	float op1 , op2 , result;
	int choice;

	clrscr();
	printf("Enter operand-1 and operand-2\n");
	scanf("%f %f", &op1, &op2);
up:	
	printf("\nMenu\n");
	printf("1. Addition \n");
	printf("2. Difference\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");

	scanf("%d", &choice);

	switch( choice )
	{
	case 1:
		result = op1 + op1;
		break;
	case 2:
		result = op1- op2;
		break;
	case 3:
		result = op1 * op2;
		break;
	case 4:
		result =op1/op2;
		break;
	default:
		printf("Invalid choice,try again\n");
		goto up;
	}

	printf("Result = %f\n", result );
	getch();
	}

