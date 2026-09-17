#include <iostream>
using namespace std;

class Bank {
private:

    class Account {
    public:
        int accountNumber;
        string name;
        int withdrawn;
        int deposit;

        Account(int accNo, string n, int w, int d) {
            accountNumber = accNo;
            name = n;
            withdrawn = w;
            deposit = d;
        }

        void display() {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Name: " << name << endl;
            cout << "Withdrawn: " << withdrawn << endl;
            cout << "Deposit: " << deposit << endl;
            cout << "Balance: " << deposit - withdrawn << endl;
        }
    };

public:

    void createAccounts() {

        Account* accounts[3];

        for (int i = 0; i < 3; i++) {

            int accNo, w, d;
            string name;

            cout << "\nEnter account number: ";
            cin >> accNo;

            cout << "Enter name: ";
            cin >> name;

            cout << "Enter withdrawn amount: ";
            cin >> w;

            cout << "Enter deposit amount: ";
            cin >> d;

            accounts[i] = new Account(accNo, name, w, d);
        }

        cout << "\n ACCOUNT DETAILS ";

        for (int i = 0; i < 3; i++) {
            accounts[i]->display();
            cout << endl;
        }
    }
};

int main() {

    Bank b;

    b.createAccounts();

    return 0;
}
