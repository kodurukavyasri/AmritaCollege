#include <iostream>
using namespace std;

class ComplexRational {
private:
    double numeratorReal;  // Numerator of the real part
    double denominatorReal; // Denominator of the real part
    double numeratorImaginary;  // Numerator of the imaginary part
    double denominatorImaginary; // Denominator of the imaginary part

public:
    // Constructor
    ComplexRational(double _numeratorReal, double _denominatorReal,
                   double _numeratorImaginary, double _denominatorImaginary) {
        numeratorReal = _numeratorReal;
        numeratorImaginary = _numeratorImaginary;
        denominatorReal = _denominatorReal;
        denominatorImaginary = _denominatorImaginary;
    }

    // Display the complex rational number
    void show() {
        cout << numeratorReal << "/" << denominatorReal << "+"
             << numeratorImaginary << "/" << denominatorImaginary << "i" << endl;
    }

    // Overload + operator for addition
    ComplexRational operator+(const ComplexRational& other) {
        return ComplexRational(
            numeratorReal * other.denominatorReal + denominatorReal * other.numeratorReal,
            denominatorReal * other.denominatorReal,
            numeratorImaginary * other.denominatorImaginary + denominatorImaginary * other.numeratorImaginary,
            denominatorImaginary * other.denominatorImaginary
        );
    }

    // Overload - operator for subtraction
    ComplexRational operator-(const ComplexRational& other) {
        return ComplexRational(
            numeratorReal * other.denominatorReal - denominatorReal * other.numeratorReal,
            denominatorReal * other.denominatorReal,
            numeratorImaginary * other.denominatorImaginary - denominatorImaginary * other.numeratorImaginary,
            denominatorImaginary * other.denominatorImaginary
        );
    }

    // Overload * operator for multiplication
    ComplexRational operator*(const ComplexRational& other) {
        return ComplexRational(
            numeratorReal * other.numeratorReal - numeratorImaginary * other.numeratorImaginary,
            denominatorReal * other.denominatorReal - denominatorImaginary * other.denominatorImaginary,
            numeratorReal * other.numeratorImaginary + numeratorImaginary * other.numeratorReal,
            denominatorReal * other.denominatorImaginary + denominatorImaginary * other.denominatorReal
        );
    }

    // Overload << operator for output
    friend ostream& operator<<(ostream& out, const ComplexRational& c) {
        if (c.denominatorReal != 0 && c.denominatorImaginary != 0) {
            out << c.numeratorReal << "/" << c.denominatorReal << "+"
                << c.numeratorImaginary << "/" << c.denominatorImaginary << "i" << endl;
        } else {
            out << "Denominator should not be zero" << endl;
        }
        return out;
    }
};

int main() {
    double numeratorReal1, denominatorReal1, numeratorImaginary1, denominatorImaginary1;
    double numeratorReal2, denominatorReal2, numeratorImaginary2, denominatorImaginary2;

    cout << "Enter the values for the first complex rational number "
         << "(numerator real, denominator real, numerator imaginary, denominator imaginary):" << endl;
    cin >> numeratorReal1 >> denominatorReal1 >> numeratorImaginary1 >> denominatorImaginary1;

    cout << "Enter the values for the second complex rational number "
         << "(numerator real, denominator real, numerator imaginary, denominator imaginary):" << endl;
    cin >> numeratorReal2 >> denominatorReal2 >> numeratorImaginary2 >> denominatorImaginary2;

    ComplexRational c1(numeratorReal1, denominatorReal1, numeratorImaginary1, denominatorImaginary1);
    ComplexRational c2(numeratorReal2, denominatorReal2, numeratorImaginary2, denominatorImaginary2);

    if (denominatorReal1 != 0 && denominatorImaginary1 != 0 &&
        denominatorReal2 != 0 && denominatorImaginary2 != 0) {
        string operation;
        do {
            cout << "Enter '+' for addition, '-' for subtraction, '*' for multiplication, "
                 << "and 'out' for exiting:" << endl;
            cin >> operation;

            if (operation == "+") {
                ComplexRational c3 = c1 + c2;
                cout << c3;
            } else if (operation == "-") {
                ComplexRational c4 = c1 - c2;
                cout << c4;
            } else if (operation == "*" &&
                       denominatorReal1 * denominatorReal2 - denominatorImaginary1 * denominatorImaginary2 != 0) {
                ComplexRational c5 = c1 * c2;
                cout << c5;
            } else if (operation == "out") {
                break;
            } else {
                cout << "Invalid operation. Please enter a valid operation." << endl;
            }
        } while (true);
    } else {
        cout << "Denominator should not be zero" << endl;
    }

    return 0;
}