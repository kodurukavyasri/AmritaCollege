#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to get user input for name
void update_Name(string& name) {
    cout << "Enter your name: ";
    getline(cin, name); // getline to get name
}

// Function to get user input for rollno
void update_Address(string& rollno) {
    cout << "Enter your address: ";
    getline(cin, rollno);// getline to get address
}

// Function to get user input for SGPA (many semesters)
vector<float> update_sgpa(int numSemesters) {
    vector<float> sgpas(numSemesters); // Create a vector to store SGPA for each semester

    for (int i = 0; i < numSemesters; ++i) {
        cout << "Enter SGPA for semester " << i + 1 << ": ";
        cin >> sgpas[i];
    }

    return sgpas; 
}

// Function to calculate CGPA
float calculate_cgpa(const vector<float>& sgpas) {
    if (sgpas.empty()) {
        return 0.0; // Handle case where there are no SGPA values
    }

    float sum = 0.0;
    for (float sgpa : sgpas) {
        sum += sgpa;
    }
    return sum / sgpas.size();
}

int main() {
    string rollNo;
    string name;
    string DOB;
    char gender;
    string address;
    vector<float> sgpas; 
    float cgpa;
    int numSemesters;

    // Get user input
    cout << "Enter your roll number: ";
    cin >> rollNo;

    // Call the function to get the name
    update_Name(name);

    cout << "Enter your Date of Birth (YYYY-MM-DD): ";
    cin >> DOB;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    // Call the function to get the address
    update_Address(address);

    // Get the number of semesters
    cout << "Enter the number of semesters: ";
    cin >> numSemesters;

    // Call the function to get the SGPA for each semester
    sgpas = update_sgpa(numSemesters);

    // Calculate CGPA
    cgpa = calculate_cgpa(sgpas); 

    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}