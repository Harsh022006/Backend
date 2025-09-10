#include <iostream.h>
#include <conio.h>

int globalVar = 100;

void displayLocal() {
    int localVar = 50;   
    cout << "\nInside displayLocal() - Local Variable = " << localVar << endl;
    cout << "\nInside displayLocal() - Global Variable = " << globalVar << endl;
}

void modifyGlobal() {
    globalVar = globalVar + 25;
    cout << "\nInside modifyGlobal() - Global Variable modified to " << globalVar << endl;
}

void main() {
    clrscr();

    cout << "\nInitially, Global Variable = " << globalVar << endl;

    displayLocal();
    modifyGlobal();

    cout << "\nBack in main() - Global Variable = " << globalVar << endl;

    getch();
}
