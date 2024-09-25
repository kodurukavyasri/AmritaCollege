#include<stdio.h>

int main(){
    struct struct1{
    char name[60];
    char street[60];
    char city[60];
    char state[60];
}a;   
struct struct2{
    int account_no;
    char account_status[60];
    int previous_balance;
    int current_payment;
    int newbalance;
    int new_payment_date;
}b; 

    scanf("%s", &a.name);
    scanf("%s", &a.street);
    scanf("%s", &a.city);
    scanf("%s", &a.state);

    scanf("%d", &b.account_no);
    scanf("%d", &b.previous_balance);
    scanf("%d", &b.current_payment);

    if(previous_balance > current_payment)
        printf("%d", previous_balance - current_payment);

    else 
        printf("%d", previous_balance + current_balance);


}   


