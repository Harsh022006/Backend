#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,result;
	clrscr();

	printf("\nEnter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);

	printf("\n**********************************");
	printf("\nArithmetic operators");
	printf("\n**********************************");
	printf("\na + b = %d",a+b);
	printf("\na - b = %d",a-b);
	printf("\na * b = %d",a*b);

	if(b!=0)
	{
		printf("\na / b = %d",a/b);
		printf("\na %% b = %d",a%b);
	}
	else
	{
		printf("\ndivison and modulus is not posiible (b=0).");
	}


       getch();
}
