#include<stdio.h>
#include<conio.h>

void main()
{
	 //declare variables
	int age = 20;   //int variables
	char grade='A';   //char
	float percentage = 85.6;   //float
	const float PI=3.14159;     //constant value
	clrscr(); //cleare screen

	//display values
	printf("\nAge : %d",age);
	printf("\nGrade : %c",grade);
	printf("\npercentage : %.2f",percentage);
	printf("\nconstant PI : %.5f",PI);

	getch();
}
