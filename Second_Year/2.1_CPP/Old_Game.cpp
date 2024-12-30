#include<iostream>

using namespace std;

class Old_Game {
private:
    int number;

public:Old_Game(int _number) : number(_number) {}
    
    void Display(){
        cout << number << endl;
    }

    int Guess(Old_Game &other){
        int correct_place = 0;
        int wrong_place = 0;

        while (this->number != 0){
            if ((this->number % 10) == (other.number % 10));
            correct_place = correct_place + 1;
            this->number/10;
        }
       
        while (this->number != 0){
            int x = this->number % 10;
            this->number = this->number /10;

            int y = other.number;

            while ( other.number != 0){
                if (x == (other.number % 10));
                correct_place = correct_place + 1;
                other.number /10;
            }

            other.number = y;
        }

        cout << correct_place << endl;
        cout << wrong_place << endl;

        return 0;
    }
};

int main(){
    Old_Game my_number(1234);
    my_number.Display();

    Old_Game my_guess(1367);
    my_guess.Display();

    my_number.Guess(my_guess);
    return 0;
}