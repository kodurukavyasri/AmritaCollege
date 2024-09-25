#include<iostream>
using namespace std;

class Time{
    private :
    int hours;
    int minutes;

    public:
    Time(int h, int m) : hours(h), minutes(m) {}

    void display(){
        cout << hours << ":" << minutes <<endl;
        
    }
    int compare(Time &other){
        if (this->hours == other.hours && this->minutes == other.minutes){
            return 0;
            }
            else {
                return 1;
            }
    }
};

int main(){
    Time T1(10, 24);
    Time T2(10, 24);

    T1.display();
    T2.display();

    if (T1.compare(T2) == 0){
        cout << "Times are equal." << endl;
    }
    else {
        cout << "Times are not equal." << endl;
    }

    return 0;

}