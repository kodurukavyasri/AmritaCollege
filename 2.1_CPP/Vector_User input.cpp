#include <iostream>
#include <cmath>

using namespace std;

class Vector {
private:
    double x;
    double y;

public:
    Vector(double x = 0, double y = 0) : x(x), y(y) {}

    // Overload Addition for two vectors
    double addition(const Vector& other) const {
        double add_x = x + other.x;
        double add_y = y + other.y;
                
        cout << "addx = " << add_x << endl;
        cout << "addy = " << add_x << endl;
        return 0;
       

    }

    // Overload Subtraction for two vectors
    double subtraction(const Vector& other) const {
        double sub_x = x - other.x;
        double sub_y = y - other.y;
                
        cout << "subx = " << sub_x << endl;
        cout << "suby = " << sub_x << endl;
        
        return 0;
    
    }

    // Overload dotProduct for two vectors
    double dotProduct(const Vector& other) const {
        return(x * other.x + y * other.y);
    }

};

int main() {

    double x1,y1,x2,y2;

    cout << "Please enter the value of x1 : "; 
    cin >> x1;
    cout << "Please enter the value of y1 : "; 
    cin >> y1;

    cout << "Please enter the value of x2 : "; 
    cin >> x2;
    cout << "Please enter the value of y2 : "; 
    cin >> y2;

    Vector v1(x1, y1);
    Vector v2(x2, y2);

    double addition = v1.addition(v2);

    double subtraction = v1.addition(v2);
    
    double dot = v1.dotProduct(v2);
    cout << "Dot product of v1 and v2: " << dot << endl;



    

    return 0;
}