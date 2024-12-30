#include <iostream>
#include <string>
using namespace std;

class book
{ 
private:
    string rollno;
    string name;
    string date_of_birth;
    int gender;
    string address;
    float sgpa[8];
    float cgpa;
    

public:

// constructor is used to intialise student details
// r for rollno
// n for name 
// g for gender 
// s for sgpa 
    student(string r, string n, string dob, int g, string addr, float s[8]) 
    { 
        rollno = r;
        name = n;
        date_of_birth = dob;
        gender = g;
        address = addr;
        for (int i = 0; i < 8; i++) {
            sgpa[i] = s[i];
        }
        Calculatecgpa();
    }

    void updatename(string newname) 
    {
        name = newname;
    }

    void updateAddress(string newAddress) 
    {
        address = newAddress;
    }
 
 // Calculating CGPA based on SGPA
    void Calculatecgpa() 
    {
        float total = 0.0;
        for (int i = 0; i < 8; i++) 
        {
            total += sgpa[i];
        }
        cgpa = total / 8;
    }

    void publishcgpa() 
    {
        cout << "Current CGPA of student is " << cgpa << endl;
    }

    void publishsgpa() 
    {
        for (int i = 0; i < 8; i++) 
        {
            cout << "Current SGPA for semester is " << (i + 1) << ": " << sgpa[i] << endl;
        }
    }

    void displayStudentDetails() 
    {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << date_of_birth << endl;
        cout << "Gender: " << (gender == 0 ? "Male" : "Female") << endl;
        cout << "Address: " << address << endl;
        publishsgpa();
        publishcgpa();
    }
};

int main()
 {
    float sgpa[8];
    string name, rollno, date_of_birth, address;
    int gender;

    cout << "Enter SGPA of student for 8 semesters:" << endl;
    for (int i = 0; i < 8; i++) 
    {
        cin >> sgpa[i];
    }

    cout << "Enter roll number of student: ";
    cin >> rollno;
    cout << "Enter name of the student: ";
    cin >> name;
    cout << "Enter date of birth of student: ";
    cin >> date_of_birth;
    cout << "Enter gender of student as 0 for Male, 1 for Female: ";
    cin >> gender;
    cout << "Enter address of student: ";
    cin >> address;

    student s(rollno, name, date_of_birth, gender, address, sgpa);

    s.displayStudentDetails();
    s.updatename("Nandida");
    s.updateAddress("subjail,mahe");
    cout << "\n Updated details:" << endl;
    s.displayStudentDetails();

    return 0;
    
}