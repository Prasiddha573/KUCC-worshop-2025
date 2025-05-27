#include <iostream>
#include<iomanip>
void show_balance(double balance);
double deposit();
double withdraw(double balance);
using namespace std;
int main()
{
    double balance = 0;
    int choice = 0;
    do
    {
        cout << "enter your choice" << "\n";
        cout << "1.balance see" << "\n";
        cout << "2.deposit" << "\n";
        cout << "3.withdraw" << "\n";
        cout << "4.Your transaction is complete" << "\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            show_balance(balance);
            break;
        case 2:
            balance += deposit();
            show_balance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            cout << "Thank you !\n";
            break;
        default:
            cout << "Sakiyo tero" << endl;
        }
    } while (choice != 4);
    return 0;
}
void show_balance(double balance)
{
    cout << "your balance is $" << balance << endl;
}
double deposit()
{
    double amount=0;
    cout<<"enter amount to be deposited"<<endl;
    cin>>amount;
    return amount;
}
double withdraw(double balance)
{
    return 0;
}