#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("\nEnter A : ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("\nA is Even Number");
	}
	else
	{
		printf("\nA is Odd Number");
	}
	getch();
}