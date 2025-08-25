#include<stdio.h>
#include<conio.h>

void main()
{
	int i,arr[5];
	clrscr();
	printf("\nEnter 5 integers : ");
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("\nYou Entered : ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}

	getch();
}