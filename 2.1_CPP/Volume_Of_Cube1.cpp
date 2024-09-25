#include<iostream>
using namespace std;

class cube{
    private:
    string colour;
    float length;

    public:
    cube(float _length){
        colour = "red";
        length = _length;
    }
    
    cube(string _colour, float _length){
        colour = _colour;
        length = _length;
    }

    void display(){
        cout << "\n The colour is: " << colour;
    }

    void volume(){
        int volume = length*length*length;
        cout << "\n volumne is: " << volume;
    }
};

int main(){

    cube mycube("blue",5);
    mycube.volume();

    cube babucube(3);
    babucube.volume();

    return 0;
}