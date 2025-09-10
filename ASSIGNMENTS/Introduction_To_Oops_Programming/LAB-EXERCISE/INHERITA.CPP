#include<iostream.h>
#include<conio.h>

class Person 
{
    protected:   
    char name[30];
    int age;

    public:
    void inputPerson() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person 
{
    private:
    int rollNo;
    char course[20];

    public:
    void inputStudent() 
    {
        inputPerson();  
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Course: ";
        cin >> course;
    }

    void displayStudent() 
    {
        displayPerson();  
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

class Teacher : public Person 
{
    private:
    char subject[20];
    float salary;

    public:
    void inputTeacher() 
    {
        inputPerson();  
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayTeacher() 
    {
        displayPerson();  
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

void main() 
{
    clrscr();

    Student s;
    Teacher t;

    cout << "--- Enter Student Details ---\n";
    s.inputStudent();

    cout << "\n--- Enter Teacher Details ---\n";
    t.inputTeacher();

    cout << "\n--- Student Details ---\n";
    s.displayStudent();

    cout << "\n--- Teacher Details ---\n";
    t.displayTeacher();

    getch();
}