#include<iostream>
using namespace std;

class cube{
    private:
    string colour;
    float length;

    public:
    cube(string _colour, float _length){
        colour = _colour;
        length = _length;
    }

    cube(){
        colour = "red";
        length = 4;
    }
    
    void display(){
        cout << "The colour is :" << colour;
    }

    void volume(){
        int volume = length*length*length;
        cout << volume;
    }
};

int main(){
    cube mycube("blue", 5);
    mycube.volume();
    //cube babucube();
    //cube babucube();
    //babucube.volume();
    return 0;
}