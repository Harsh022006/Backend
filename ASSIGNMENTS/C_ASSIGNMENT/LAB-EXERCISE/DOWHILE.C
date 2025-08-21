#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int i;
	clrscr;
	printf("\nNumbers from 1 to 10 using DO-WHILE loop");
	i=1;
	delay(2000);
	do
	{
		printf("\n%d",i);
		i++;
	}while(i<=10);

	getch();
}