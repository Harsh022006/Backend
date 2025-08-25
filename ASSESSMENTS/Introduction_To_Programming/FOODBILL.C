#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>

void main()
{
	//Declare variebles
	int choice,qty,price = 0,total = 0,amount;
	int i=0;
	int j;
	char items[50][20];
	int qtyArr[50],priceArr[50],amtArr[50];
	char more;
	clrscr();

	delay(1000);
	printf("\n\t\t\tFOOD BILLING SYSTEM");
	printf("\n\t\t********************************");

	//Uses a do-while loop to keep asking if use wants more
	do
	{
		clrscr();
		delay(1000);
		printf("\n\t\tFOOD BILLING SYSTEM");
		printf("\n\t************************************");

		printf("\n\n\t1.Pizza		Rs.150");
		printf("\n\n\t2.Burger	Rs.100");
		printf("\n\n\t3.Sandwich	Rs. 80");
		printf("\n\n\t4.Coke		Rs. 50");

		printf("\n\nEnter Choice (1-4) : ");
		scanf("%d",&choice);
		printf("Enter Quantity : ");
		scanf("%d",&qty);

		//Using Switch case for chhose any one
		switch(choice)
		{
			case 1:
				price = 150;
				strcpy(items[i],"Pizza");
				printf("\nYou have selected Pizza");
				break;
			case 2:
				price = 100;
				strcpy(items[i],"Burger");
				printf("\nYou have selected Burger");
				break;
			case 3:
				price = 80;
				strcpy(items[i],"Sandwich");
				printf("\nYou have selected Sandwich");
				break;
			case 4:
				price = 50;
				strcpy(items[i],"Coke");
				printf("\nYou have selected Coke");
				break;
			default:
				price = 0;
				strcpy(items[i],"Invalid");
				printf("\nInvalid Choice!");
				break;
		}

		amount = qty * price;
		total += amount;

		qtyArr[i] = qty;
		priceArr[i] = price;
		amtArr[i] = amount;

		if(price>0)
		{
			printf("\nAdded : %s x %d = %d",items[i],qty,amount);
			i++;
		}

		printf("\n\nDo you want to select more? (y/n) : ");
		fflush(stdin);
		scanf("%c",&more);

	}while(more == 'y' || more == 'Y');

	delay(1000);
	//Printing Final Bill
	printf("\n\n\t\t\t   FINAL BILL");

	printf("\n\t*************************************************");

	printf("\n\t| ITEM\t\tQUANTITY\tPRICE\tAMOUNT |");

	printf("\n\t*************************************************");

	//Use for loop for details
	for(j=0;j<i;j++)
	{
		printf("\n\t| %-10s\t%d\t\t%d\t%d |",items[j],qtyArr[j],priceArr[j],amtArr[j]);
	}

	printf("\n\t*************************************************");

	printf("\n\t| TOTAL BILL : \t\t\t\t%d |",total);

	printf("\n\t*************************************************");

	printf("\n\n\tThank You..! Visit Again.");

	getch();
}







