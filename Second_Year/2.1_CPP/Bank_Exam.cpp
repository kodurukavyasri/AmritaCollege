#include <iostream>
using namespace std;

class Bankaccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    Bankaccount(int _accno, string _holdername, double _balance) {
        accountNumber = _accno;
        accountHolderName = _holdername;
        balance = _balance;
    }

    void deposit(double _deposit) {
        balance += _deposit;
    }

    void withdraw(double _withdraw) {
        if (balance >= _withdraw) {
            balance -= _withdraw;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void calculateInterest(double _interestRate) {
        balance += (balance * _interestRate / 100);
    }

    void display() {
        cout << "Account holder name: " << accountHolderName << endl;
        cout << "Account no: " << accountNumber << endl;
        cout << "Balance in your account: " << balance << endl;
    }
};

int main() {
    int accno;
    string accholdername;
    double balance;
    int deposit, withdraw;
    double intrestrate;
    string op;

    cout << "Enter account number, account holder name and balance:" << endl;
    cin >> accno >> accholdername >> balance;

    Bankaccount b1(accno, accholdername, balance); // Create object using constructor

    do {
        cout << "Enter 'd' for deposit, 'w' for withdraw, 'i' for interest rate and 'end' for end of transaction" << endl;
        cin >> op;

        if (op == "d") {
            cout << "Enter amount to deposit:" << endl;
            cin >> deposit;
            b1.deposit(deposit);
            b1.display();
        } else if (op == "w") {
            cout << "Enter amount to withdraw:" << endl;
            cin >> withdraw;
            b1.withdraw(withdraw);
            b1.display();
        } else if (op == "i") {
            cout << "Enter interest rate:" << endl;
            cin >> intrestrate;
            b1.calculateInterest(intrestrate);
            b1.display();
        } else if (op == "end") {
            break; // Exit the loop
        } else {
            cout << "Invalid option. Please choose from the given options and note menu is case sensitive" << endl;
        }
    } while (true); // Loop until the user enters "end"

    return 0;
}