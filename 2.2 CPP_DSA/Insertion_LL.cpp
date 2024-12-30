#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
    node(int value) : data(value), next(nullptr){}
};

class LinkedList{
    private : 
        node* head;
    public : 
        LinkedList() : head(nullptr){}
    
    //Function to insert new node at the begining
        void push(int new_data, int position){
            node* temp = new node(new_data);
            
            if(position == 1){
                temp->link = head;
                head = temp;
                return;
            }
            node* ptr = head;
        }

    // Function to insert a new node at any given point 
        void push(int new_data);
        while (pos!=1 && ptr != nullptr){
            ptr = ptr ->link;
            pos--;
        }
        
        if (ptr == null){
            cout << "Position exceeds the length of the linked list" << endl;
            delete temp;
            return;
        }
        // Inserting the new node
        temp -> link = ptr->link;
        ptr -> link = temp;

        void printlist(){
            node* current = head;
            while (current != nullptr){
                cout << current-> data << "->";
                current = current -> link;
            }
            cout << "nullptr" << endl;
        }
};

int main(){
    LinkedList ll;

    ll.push(10,1);
    ll.push(20,2);
    ll.push(30,2);

    ll.printList();

    return 0;
}