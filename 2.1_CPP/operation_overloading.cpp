#include <iostream>
using namespace std;
class complex {
    private:
    int real;
    int img;
    public:
    complex(int x,int y)
    {
    real=x;
    img=y;
    }
    /*complex operator for addition*/
    complex operator+(complex const &other)
    {
        return complex(real+other.real,img-other.img);
    }

    /*complex operator for subtraction*/
    complex operator-(complex const &other)
    {
        return complex(real-other.real,img-other.img);
    }

    /*complex operator for multiplication*/
    complex operator(complex const &other)
    {
        return complex(real-other.real,img-other.img);
    }
    
    
    void print()
    {
        cout<<real<<"+i"<<img<<"\n";
    }
};

int main()
{
    complex c1(3,4);
    complex c2(1,2);
    c1.print();
    c2.print();
    complex c3=c1-c2;
    c3.print();

    return 0;
}