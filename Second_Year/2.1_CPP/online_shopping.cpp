#include<iostream>
using namespace std;

class onlineshopping{
    public:
        virtual void purchaseIphone() = 0;
        ~onlineshopping()
        { cout << "thank you for shopping with us " << endl;}
};

class amazon : public onlineshopping{
    public:
        void purchaseIphone(){
            cout << "5 star" << endl;
        }

        ~amazon(){
            cout << "AMAZON" << endl;
        }
};

class flipkart : public onlineshopping{

    public:
        void purchaseIphone(){
            cout << "3 star" << endl;
        }

        ~flipkart(){
            cout << "FLIPKART" << endl;
        }
};

int main(){
    onlineshopping *p;
    flipkart f;
    amazon a,b;

    p = &a;
    p->purchaseIphone();

    p = &f;
    p->purchaseIphone();

    onlineshopping *q=new flipkart();

    //q->purchaseIphone();

    delete q;
    cout << "online" << endl;
}