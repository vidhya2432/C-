#include <iostream>
using namespace std;

int main() {
    int atm_pin;
    int option;
    int balance = 8000;
    int amount;

    cout << "Enter ATM PIN: ";
    cin >> atm_pin;

    if(atm_pin == 5252) {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Check Balance";
        cout << "\nEnter option: ";
        cin >> option;

        if(option == 1) {

            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Deposited Successfully!\n";
            cout << "New Balance = " << balance;
        }

        else if(option == 2) {

            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if(amount <= balance) {
                balance = balance - amount;
                cout << "Withdrawal Successful!\n";
                cout << "Remaining Balance = " << balance;
            } else {
                cout << "Insufficient Balance!";
            }
        }

        else if(option == 3) {

            cout << "Your Balance = " << balance;
        }

        else {
            cout << "Invalid Option!";
        }
    }
    else {
        cout << "Wrong PIN!";
    }

    return 0;
}
