#include <iostream.h>
#include <conio.h>

int globalVar = 100;

void displayLocal() 
{
    int localVar = 50;   
    cout << "Inside displayLocal() - Local Variable = " << localVar << endl;
    cout << "Inside displayLocal() - Global Variable = " << globalVar << endl;
}

void modifyGlobal() 
{
    globalVar = globalVar + 25;  
    cout << "Inside modifyGlobal() - Global Variable modified to " << globalVar << endl;
}

void main() 
{
    clrscr();

    cout << "Initially, Global Variable = " << globalVar << endl;

    displayLocal(); 
    modifyGlobal();     

    cout << "Back in main() - Global Variable = " << globalVar << endl;

    getch();
}
