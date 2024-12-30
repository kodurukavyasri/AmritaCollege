#include <iostream>
#include <string>

using namespace std;

class Bank_Account{
    private:
        string account_holder;
        int account_no;
        int account_balance;
        int deposit_money;
        int withdraw_money;
        int current_balance;

    public:
         Bank_Account(string _account_holder, int _account_no, int _account_balance,
             int _deposit_money, int _withdraw_money, int _current_balance) :
            account_holder(_account_holder),
            account_no(_account_no),
            account_balance(_account_balance),
            deposit_money(_deposit_money),
            withdraw_money(_withdraw_money){}

    void display(){
            cout << "the Account Holder is : " << account_holder << endl;
            cout << "the Account No is : " << account_no << endl;
            cout << "the account Balance is : " << account_balance << endl;
            cout << "the Deposited Amount is : " << deposit_money << endl;
            cout << "the withdrawal Amount is : " << withdraw_money << endl;
            cout << "the Current Balance is : " << current_balance << endl;
        }

};

int main(){
    Bank_Account My_Bank_Account ("Kavya", 123456789, 600, 400, 500, 500);
    My_Bank_Account.display();
    return 0;
}

