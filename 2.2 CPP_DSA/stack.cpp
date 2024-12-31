#include <iostream>
using namespace std;

#define max 100 // Corrected: Removed the semicolon

class Stack {
private:
    int arr[max]; // Array to hold stack elements
    int top;      // Index of the top element

public:
    Stack() { // Constructor to initialize the stack
        top = -1; // Stack is initially empty
    }

    bool isEmpty() { 
        return (top == -1); // Check if stack is empty
    }

    bool isFull() {
        return (top >= max - 1); // Check if stack is full
    }

    void push(int element) {
        if (isFull()) {
            cout << "Stack Overflow" << endl; // Handle overflow
            return;
        }
        arr[++top] = element; // Increment top and add the element
        cout << "Pushed " << element << " to stack" << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl; // Handle underflow
            return -1; // Return an error value
        }
        return arr[top--]; // Return the top element and decrement top
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl; // Handle empty case
            return -1; // Return an error value
        }
        return arr[top]; // Return the top element
    }
};

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "The top element is: " << s.peek() << endl; // Should output 4
    cout << "Popped element: " << s.pop() << endl;     // Should output 4

    cout << "Top element after popping: " << s.peek() << endl; // Should output 3

    while (!s.isEmpty()) {
        cout << "Popped element: " << s.pop() << endl;
    }

    s.pop(); // Attempt to pop from an empty stack

    return 0;
}