
	    #include<conio.h>	
		void main()
		{
			int num , i , sum=0;
		    clrscr();
			
			printf("Enter 20 integers\n");

			for(i=1; i<=20 ; i++)
			{
				printf("Enter %d number :" , i);
				scanf("%d", &num);
				if( num == -999 ) break;
				if( num < 0 ) continue;

				sum = sum + num;
				printf("Sum = %d\n", sum);
			}
			printf("\nTotal value = %d", sum);
	
			getch();
		}
				
