#include<iostream.h>
#include<conio.h>

class BankAccount 
{
    private:   
    float balance;

    public:
    
    BankAccount() {
        balance = 0;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else 
        {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void showBalance() 
    {
        cout << "Current Balance: " << balance << endl;
    }
};

void main() 
{
    clrscr();

    BankAccount acc; 
    int choice;
    float amount;

    do 
    {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Show Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) 
        {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                acc.withdraw(amount);
                break;
            case 3:
                acc.showBalance();
                break;
            case 4:
                cout << "Thank you for using our bank!";
                break;
            default:
                cout << "Invalid choice!";
        }
    } while(choice != 4);

    getch();
}