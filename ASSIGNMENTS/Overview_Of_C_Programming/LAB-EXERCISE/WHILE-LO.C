#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int i;
	clrscr();
	printf("\nNumbers from 1 to 10 using WHILE loop");
	delay(2000);
	i=1;
	while(i<=10)
	{
		printf("\n%d",i);
		i++;
	}
	getch();
}