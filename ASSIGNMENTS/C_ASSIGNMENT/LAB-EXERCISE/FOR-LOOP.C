#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int i;
	clrscr();
	printf("\nNumber from 1 to 10 using FOR loop :");
	delay(2000);
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
	}
	getch();
}