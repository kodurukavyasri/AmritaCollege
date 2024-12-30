#include<iostream>
using namespace std;

//#define max = 100;
class stack{
    private: 
        int arr[100];
        int top;

    public:
        stack(){ // constructor to initialize the stack
            top = -1;// Stack is initially empty
        } 

    // Function to add an item to the stack
    void push(int x){
        if (top >= 100 -1)
            cout << "Stack overflow " << endl;
            return;
    }
    arr[++top] =x; // Incrementd the top and added the item
    cout << "pushed" << endl;

    // Function to remove an item from the stack
    int peek(){
        if (top < 0){
            cout << "stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    // Function to check if stack is empty
    bool isempty(){
        return (top < 0);
    }

    // Function to check if the stack is full
    bool isEmpty(){
        return (top < 0); //If top is less than 0, stack is empty
    }

    // Function to check if the stck is full
    bool isFull(){
        return (top >= 100 -1) //If stack is maximum size then the stack is full
    }
};

int main(){
    stack s;
}

