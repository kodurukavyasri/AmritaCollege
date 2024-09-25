#include <iostream>
using namespace std;

class weather{
    private:
        string StationID;
        string StationName;
        float Pressure;
        float Temprature;
    
    public:
        weather(string _StationID, string _StationName, float _Pressure, float _Temprature ) {
            StationID = _StationID;
            StationName = _StationName;
            Pressure = _Pressure;
            Temprature = _Temprature;
            }

    void display(){
            cout<<"\nThe StationID is : "<<StationID;
            cout<<"\nThe StationName is : "<<StationName;
            cout<<"\nThe Pressure is : "<<Pressure;
            cout<<"\nThe Temprature is : "<<Temprature;

    } 

    bool isTempraturesuitable(float Temprature){
        if(Temprature > -12 && Temprature < 45 ){
            cout << "The Temprature is valid";
        }
        
    }
};

int main(){
    
    weather myweather("SC503", "Hyderabad", 76, 23);

    myweather.display();
}