#include<iostream>
#include<cmath>
using namespace std;

class Polynomial {
    public:
    double a;
    double b;
    double c;

    //constructor
    Polynomial(double a, double b, double c) : a(a), b(b), c(c) {}

    void display()const{
        cout << a << "x^2 + " <<  b << "x + " << c <<endl;

    }

    Polynomial add(const Polynomial & other){
        return Polynomial(a + other.a, b + other.b, c + other.c);
    }

    Polynomial subtract(const Polynomial & other){
        return Polynomial(a - other.a, b - other.b, c + other.c);
    }

    double evaluate(const Polynomial){
        //(-b+/-sqrt(b^2-4ac))/2a
        double x1 = (-b + sqrt(pow(b,2) - 4*a*c))/2*a;
        return x1;
    }
};

int main(){
    Polynomial p1(1, 5, 1);
    Polynomial p2(4, 5, 6);

    p1.display();
    p2.display();

    Polynomial p3 = p1.add(p2);
    cout << "The addeded result is : " << endl;
    p3.display();

    Polynomial p4 = p1.subtract(p2);
    cout << "The subtated result is : " << endl;
    p4.display();
    
    cout << "Root = " << p1.evaluate(p1) << endl;

    return 0;

}