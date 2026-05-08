#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;
    double amount;

public:
    
    void setaccountHolder(string x) { 
        accountHolder = x; 
    }
    void setaccountNumber(int y) {
        accountNumber = y; 
    }
    void setbalance(double z) {
        balance = z; 
    }
    void setamount(double a) { 
        amount = a;
        }

    
    void deposit() {
        balance += amount;
        cout << " [SUCCESS] Deposited: $" << amount << endl;
    }

    void withdraw() {
        if (balance >= amount) {
            balance -= amount;
            cout << " [SUCCESS] Withdrawn: $" << amount << endl;
        } 
        else {
            cout << " [ERROR] Insufficient balance for withdrawal!" << endl;
        }
    }


    void display() {
        cout << "\n====================================" << endl;
        cout << "        ACCOUNT INFORMATION         " << endl;
        cout << "====================================" << endl;
        cout << " Holder Name   : " << accountHolder << endl;
        cout << " Account No.   : " << accountNumber << endl;
        cout << " Final Balance : $" << fixed << setprecision(2) << balance << endl;
        cout << "====================================" << endl;
    }
};

int main() {
    BankAccount BA;
    string name;
    int id;
    double initialBalance, inputAmount;
    int choice;

    cout << "--- Welcome to the Banking System ---" << endl;

    cout << "Enter Account Holder Name: ";
    getline(cin >> ws, name);

    cout << "Enter Account Number: ";
    cin >> id;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;
    BA.setaccountHolder(name);
    BA.setaccountNumber(id);
    BA.setbalance(initialBalance);

    cout << "\nEnter amount for transaction: ";
    cin >> inputAmount;
    BA.setamount(inputAmount);

    cout << "\nChoose Transaction Type:" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        BA.deposit();
    } else if (choice == 2) {
        BA.withdraw();
    } else {
        cout << ">> [ERROR] Invalid choice!" << endl;
    }
    BA.display();

    return 0;
}
