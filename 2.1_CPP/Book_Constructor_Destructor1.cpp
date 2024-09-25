#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    float price;

public:
    // Default Constructor
    Book() {
        bookID = 0;
        title = "N/A";
        author = "N/A";
        price = 0.0;
    }

    // Parameterized Constructor
    Book(int id, string t, string a, float p) {
        bookID = id;
        title = t;
        author = a;
        price = p;
    }

    // Destructor
    ~Book() {
        cout << "Book object destroyed: " << title << endl;
    }

    // Display Book Details
    void displayDetails() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }

    // Calculate Price (No Discount)
    float calculatePrice() {
        return price;
    }

    // Calculate Price (With Discount)
    float calculatePrice(float discount) {
        return price - (price * (discount / 100.0));
    }

    // Update Details Price 
    int Update_Details(float new_price){
        price = new_price;
        return 0;
    }

    // Update Details Author 
    int Update_Details(string new_author){
        author = new_author;
        return 0;
    }


};

int main() {
    // Create a Book object using the parameterized constructor
    Book book1(101, "Harry Potter and the Philosopher's Stone", "JK Rowling", 13.99);

    // Display book details
    cout << "Book Details:" << endl;
    book1.displayDetails();

    // Create another book object using the default constructor
    Book book2(102, "Harry Potter and the Chamber of Secrets", "JK Rowling", 15.99);
    cout << "\nBook Details (Default Constructor):" << endl;
    book2.calculatePrice();
    book2.displayDetails();

    // Create another book object using the default constructor
    Book book3(103, "Harry Potter and the Prisoner of Azkaban", "JK Rowling", 17.99);
    cout << "\nBook Details (Default Constructor):" << endl;
    book3.calculatePrice(20);
    book3.displayDetails();

    cout << "\n";

    book2.Update_Details(23);
    book2.displayDetails();

    cout << "\n";

    book3.Update_Details("Jessica Rowling");
    book3.displayDetails();

    cout << "\n";
    return 0;
}