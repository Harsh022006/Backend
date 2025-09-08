#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	//Implicit
	int num1=10;
	float num2=5.5;
	float result1=num1+num2;

	cout<<"\nImplicit Conversion Example :"<<endl;
	cout<<"\nNum1 (int) = "<<num1<< endl;
	cout<<"\nNum2 (float) = "<<num2<< endl;
	cout<<"\nResult (float) = "<<result1<< endl;

	cout<<"\n";

	//Explicit

	double pi=3.14159;
	int approx = (int)pi;

	cout<<"\nExplicit Conversion Example :"<< endl;
	cout<<"\npi (double) = "<<pi<< endl;
	cout<< "\nAfter Casting to int = "<<approx<< endl;

	getch();
}