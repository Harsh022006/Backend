#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	const float PI = 3.14159;
	int age=19;
	float height=5.9;
	char grade='A';
	double salary = 50000;
	char name[30] = "Harsh";
	int nextAge = age+1;
	float circleArea = PI*4*4;
	double bonus = salary*0.1;

	cout<<"\nName : "<<name<< endl;
	cout<<"\nAge : " <<age<< ", Next Year You Will Be : "<<nextAge<< endl;
	cout<<"\nHeight : "<<height<<" Feet" << endl;
	cout<<"\nGrade : "<<grade<< endl;
	cout<<"\nSalary : "<<salary<< ",Bonus : "<<bonus<< endl;
	cout<<"\nArea of Circle with Radious 4 : "<<circleArea<<endl;

	getch();
}
