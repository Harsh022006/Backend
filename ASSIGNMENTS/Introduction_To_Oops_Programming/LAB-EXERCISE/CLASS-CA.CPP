#include<iostream.h>
#include<conio.h>

class Calculator 
{
    public:

    int add(int a, int b)
    {
	return a + b;
    }

    int subtract(int a, int b)
    {
	return a - b;
    }

    int multiply(int a, int b)
    {
	return a * b;
    }

    float divide(int a, int b)
    {
	if (b != 0)
	    return (float)a / b;
	else
	{
	    cout << "Error! Division by zero not allowed." << endl;
	    return 0;
	}
    }
};

void main()
{
    clrscr();

    Calculator calc;
    int x, y, choice;
    float result;

    cout << "\nEnter first number: ";
    cin >> x;
    cout << "\nEnter second number: ";
    cin >> y;

    cout << "\nChoose operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
	case 1:
	    result = calc.add(x, y);
	    cout << "Result = " << result;
	    break;
	case 2:
	    result = calc.subtract(x, y);
	    cout << "Result = " << result;
	    break;
	case 3:
	    result = calc.multiply(x, y);
	    cout << "Result = " << result;
	    break;
	case 4:
	    result = calc.divide(x, y);
	    cout << "Result = " << result;
	    break;
	default:
	    cout << "Invalid choice!";
    }

    getch();
}
