#include <iostream.h>
#include <conio.h>

class Rectangle {
    int length, width;    // Data members

public:
    void input() {        // Member function to take input
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    int calculateArea() {  // Member function to calculate area
        return length * width;
    }

    void display() {       // Member function to display result
        cout << "Area of rectangle = " << calculateArea();
    }
};

void main() {
    clrscr();

    Rectangle rect;   // Create object of Rectangle class
    rect.input();     // Call input function
    rect.display();   // Call display function

    getch();
}