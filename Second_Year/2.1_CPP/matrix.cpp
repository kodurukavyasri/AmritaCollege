#include <iostream>
using namespace std;

class Matrix { // Changed class name to Matrix for consistency
private:
    int rows;
    int columns;
    int** data;

public:
    // Constructor
    Matrix(int _rows, int _columns) : rows(_rows), columns(_columns) {
        data = new int*[rows]; 
        for (int i = 0; i < rows; i++) {
            data[i] = new int[columns]; // Corrected: data[i] is an array of int, not int*
            for (int j = 0; j < columns; j++) {
                data[i][j] = 0;
            }
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i]; 
        }
        delete[] data;
    }

    // Display the matrix
    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Set a value at a specific row and column
    void set_value(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < columns) { 
            data[r][c] = value;
        } else {
            cout << "Invalid row or column index!" << endl;
        }
    }

    // Matrix multiplication
    Matrix operator*(const Matrix& other) const { 
        if (columns != other.rows) {
            cout << "Matrix multiplication not possible due to incompatible dimensions.\n";
            return Matrix(0, 0); // Return an empty matrix
        }

        Matrix result(rows, other.columns);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.columns; j++) {
                for (int k = 0; k < columns; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    Matrix m1(3, 2);
    Matrix m2(2, 2);

    m1.set_value(0, 0, 1);
    m1.set_value(0, 1, 2);
    m1.set_value(1, 0, 3);
    m1.set_value(1, 1, 4);
    m1.set_value(2, 0, 5);
    m1.set_value(2, 1, 6);

    m2.set_value(0, 0, 7);
    m2.set_value(0, 1, 8);
    m2.set_value(1, 0, 9);
    m2.set_value(1, 1, 10);

    cout << "Matrix m1:\n";
    m1.display();
    cout << "Matrix m2:\n";
    m2.display();

    Matrix m3 = m1 * m2;

    cout << "Matrix m3 (m1 * m2):\n";
    m3.display();

    return 0;
}