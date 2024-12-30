#include<iostream>
using namespace std;

class rectangle{
    private:
    string colour;
    float length;
    float breadth;

    public:
    rectangle(string _colour, float _length, float _breadth){
        colour = _colour;
        length = _length;
        breadth = _breadth;
    }

    void area(){
        int area = length*breadth;
        cout << area;
    }
};



int main(){
    rectangle myrectangle("Blue", 3.4, 7.5);
    myrectangle.area();
}