#include<stdio.h>
#include<conio.h>

void main()
{
	int month;
	clrscr;
	printf("\nEnter Month number (1-12) : ");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("\nThe Month is January.");
			break;
		case 2:
			printf("\nThe Month is february.");
			break;
		case 3:
			printf("\nThe Month is March.");
			break;
		case 4:
			printf("\nThe Month is April.");
			break;
		case 5:
			printf("\nThe Month is May.");
			break;
		case 6:
			printf("\nThe Month is June.");
			break;
		case 7:
			printf("\nThe Month is July.");
			break;
		case 8:
			printf("\nThe Month is August.");
			break;
		case 9:
			printf("\nThe Month is September.");
			break;
		case 10:
			printf("\nThe Month is October.");
			break;
		case 11:
			printf("\nThe Month is November.");
			break;
		case 12:
			printf("\nThe Month is December.");
			break;
		default:
			printf("\nInvalid Month Number! Please Enter Number Between 1 to 12.");
			break;
	}
	getch();
}