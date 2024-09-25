#include<iostream>
using namespace std;

class Date{
    private :
    string day;
    int date;
    int month;
    int year;

    public:
    Date(string d, int da, int m, int y) : day(d), date (da), month(m), year(y) {}

    int display(){
        cout << date << month << year << day << endl;
        return 0;
    }
    int compare(Date &other){
        if (this->year > other.year ){
            return 1;
        }
        else if (this->year < other.year){
            return -1;
        }
        else {
                if (this->month > other.month ){
                return 1;
                }
                else if (this->month < other.month){
                    return -1;
                }
                else {
                    if (this->date > other.date ){
                    return 1;
                    }
                    else if (this->date < other.date){
                        return -1;
                    }
                    else {
                        return 0;
                    }
                }
        }
    }
};

int main(){
    Date date1("Monday", 15, 12, 2024);
    Date date2("Tuesday", 20, 12, 2024);

    date1.display();
    date2.display();

    int result = date1.compare(date2);
    if (result == 1){
        cout << "date 1 is greater than date 2" << endl;
    }
        else if (result == -1) {
            cout << "date 2 is greater than date 1" << endl;
        }
            else {
                cout << "Times are equal." << endl;
            }

        
    return 0;
}