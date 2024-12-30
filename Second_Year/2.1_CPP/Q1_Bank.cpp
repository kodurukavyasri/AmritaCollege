#include <iostream>
#include <string>

using namespace std;

class Account {
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    Account(int accNum, const string& holderName, double initialBalance) 
        : accountNumber(accNum), accountHolderName(holderName), balance(initialBalance) {}

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient funds for withdrawal of: " << amount << endl;
        }
    }

    virtual void displayAccountInfo() const {
        cout << "Account Number: " << accountNumber
             << "\nAccount Holder: " << accountHolderName
             << "\nBalance: " << fixed << balance << endl;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int accNum, const string& holderName, double initialBalance, double rate)
        : Account(accNum, holderName, initialBalance), interestRate(rate) {}

    void calculateInterest() {
        double interest = (balance * (interestRate / 100));
        deposit(interest); // Add interest to the balance
        cout << "Interest calculated and added: " << interest << endl;
    }

    void displayAccountInfo() const override {
        Account::displayAccountInfo();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CheckingAccount : public Account {
private:
    double transactionFee;

public:
    CheckingAccount(int accNum, const string& holderName, double initialBalance, double fee)
        : Account(accNum, holderName, initialBalance), transactionFee(fee) {}

    void withdraw(double amount) override {
        if (amount + transactionFee <= balance) {
            balance -= (amount + transactionFee);
            cout << "Withdrawn: " << amount;
            cout << ", Transaction Fee: " << transactionFee << endl;
        } else {
            cout << "Insufficient funds for withdrawal of: ";
            cout << amount + transactionFee << endl;
        }
    }

    void displayAccountInfo() const override {
        Account::displayAccountInfo();
        cout << "Transaction Fee: " << transactionFee << endl;
    }
};

class CreditAccount : public Account {
private:
    double creditLimit;

public:
    CreditAccount(int accNum, const string& holderName, double initialBalance, double limit)
        : Account(accNum, holderName, initialBalance), creditLimit(limit) {}

    void withdraw(double amount) override {
        if (balance + creditLimit >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Withdrawal of: " 
                 << amount << " exceeds credit limit." << endl;
        }
    }

    void displayAccountInfo() const override {
        Account::displayAccountInfo();
        cout << "Credit Limit: " << creditLimit << endl;
    }
};

int main() {
    SavingsAccount savings(12344, "Ramaguru R", 1000.0, 5.0);
    CheckingAccount checking(54421, "Anu", 1500.0, 2.0);
    CreditAccount credit(181818, "Ammu", 500.0, 1000.0);

    savings.deposit(200.0); 
    savings.displayAccountInfo();

    
    savings.calculateInterest(); 
    savings.displayAccountInfo(); 

    
    checking.withdraw(1000.0); 
    checking.displayAccountInfo(); 

    checking.withdraw(1000.0); 
    checking.displayAccountInfo(); 

    credit.withdraw(500.0); 
    credit.displayAccountInfo(); 

    credit.withdraw(1501.0); 
    credit.displayAccountInfo(); 

    return 0;    
}