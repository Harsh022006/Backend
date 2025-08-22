#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int num=50;
	int *ptr;
	clrscr();
	ptr = &num;

	printf("\nOriginal value of num = %d",num);

	printf("\nAddress of num = %u",&num);

	*ptr = *ptr+25;

	printf("\n");

	delay(1000);

	printf("\nAfter Modifying through pointer : \n");

	delay(1000);

	printf("\nNew value of num = %d",num);

	printf("\nValue accessed by pointer = %d",*ptr);

	getch();
}