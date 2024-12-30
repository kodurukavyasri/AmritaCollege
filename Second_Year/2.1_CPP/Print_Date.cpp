#include<iostream>
using namespace std;

class date{
    private:
    string Day;
    int Date;
    int Month;
    int Year;

    public:
    date(string _Day, int _Date, int _Month, int _Year){
        Day = _Day;
        Date =_Date;
        Month =_Month;
        Year =_Year;

    }

    void Display(){
    cout << "Today's is " << Day;
    cout << "Today's date is " << Date <<"-" << Month <<"-" << Year;
}

};

int main(){
    date today("Friday. ", 26, 07, 2024);
    today.Display();
}