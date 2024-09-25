#include<iostream>
#include<string>

using namespace std;

class Old_Game {
private:
    string number;

public:Old_Game(string _number) : number(_number) {}
    
    void Display(){
        cout << number << endl;
    }

    int Compare()
};

int main(){
    Old_Game my_number(1234);
    my_number.Display();

    Old_Game my_guess(1367);
    my_guess.Display();

    my_number.Guess(my_guess);
    return 0;
}