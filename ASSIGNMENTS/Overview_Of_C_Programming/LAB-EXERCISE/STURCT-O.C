#include<stdio.h>
#include<conio.h>

struct Student
{
	char name[50];
	int roll;
	float marks;
};

void main()
{
	struct Student s[3];

	int i;
	clrscr();

	for(i=0;i<3;i++)
	{
		printf("\nEnter Details of student %d : \n",i+1);

		printf("Enter Name : ");
		scanf("%s",&s[i].name);

		printf("Enter Roll Number : ");
		scanf("%d",&s[i].roll);

		printf("Enter Marks : ");
		scanf(" %f",&s[i].marks);
		fflush(stdin);
	}

	printf("\n---Student Details---\n");
	for(i=0;i<3;i++)
	{
		printf("\nStudent %d : ",i+1);
		printf("\nName : %s",s[i].name);
		printf("\nRoll no : %d",s[i].roll);
		printf("\nMarks : %.2f\n",s[i].marks);
	}
	getch();
}
