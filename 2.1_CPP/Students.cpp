#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    Student(string name, int id) : name(name), id(id) {}

    void print_info() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }

private:
    string name;
    int id;
};

int main() {
    Student student1("Alice", 12345);
    student1.print_info();

    return 0;
}