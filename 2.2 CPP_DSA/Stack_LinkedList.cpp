#include<iostream>

using namespace std;

struct node{
    public : 
        int data;
        node* next;

        node(int value) : data(value), next(nullptr){}
};

class Stack {
    private : 
        node* top;
    
    public : 
        Stack() : top(nullptr){}

        //Push Operation
        void push(int new_data){
            node* new_node = new node(new_data);
            new_node->next = top;
            top = new_node;
            cout << "pushed" <<new_data << "to stack." << endl;
        }

        int pop(){
            if (isempty()){
                cout << "Stack underflow" << endl;
                return -1;
            }
            int popped_value = top->data;
            node* temp = top;
            top = top->next;
            delete temp;
            return popped_value;
        }
        int peek(){
            if(isempty()){
                cout << "Stack is empty!" <<endl;
                return -1;
            }           
            return top->data;
        }

        // Check if stack is empty
        bool isempty(){
            return (top == nullptr);
        }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "The top element is: " << s.peek() << endl;
    cout << "The popped element is: " << s.pop() <<endl;
    cout << "The element after popping:" <<s.peek() <<endl;

    while (false){
        cout <<"Popped element: " << s.pop() << endl;
    }

    s.pop();

    return 0;

}