#include<iostream>
using namespace std;

#define max 100;

class Stack{
    private: 
        int arr[max];
        int top;

    public: 
        Stack(){
            top = -1;
        }
        bool isEmpty(){
            return (top == -1);
        }
    
    bool isFull(){
        return (top >= max-1);
    }

    void push(int element){
        if (isFull()){
            cout << "Stack Overflow" <<endl;
            return;
        }
        arr[++top] = element; // Increment top and add the element
        cout << "Pushed " << element << " to stack" << endl;
    }

    int pop(){
        if (isEmpty()){
            cout << "Stack underflow" << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek(){
        if (isEmpty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "The top element is :" << s.peek() << endl;
    cout << "Popped element: " << s.pop() << endl;

    cout << "Top element after popping: " << s.peek() << endl;

    while (!s.isEmpty()) {
        cout << "Popped element: " << s.pop() << endl;
    }

    s.pop(); // Attempt to pop from an empty stack

    return 0;

}