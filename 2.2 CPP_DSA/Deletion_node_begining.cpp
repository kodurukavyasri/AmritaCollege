#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
    node(int value) : data(value), next(nullptr){}
};

class LinkedList{
    private : 
        node*head;
    
    public :
        LinkedList() : head(nullptr){}

    // Function to insert a new node at the end of the begining
        void push(int new_data){
            node* new_node = new node(new_data);
            new_node-> next = head;
            head = new_node;
        }

    // Function to print the linked list
        void printList(){
            node*current = head;
            while(current){
                cout << current->data << "->";
                current = current->next;
            }
            cout << "nullptr" << endl;
        }

    // Function to delete the head
        void deletehead(){
            // If the given list is empty!
            if (head == nullptr){
                cout << "Oops!!The given list is empty!"<<endl;
                return;
            }
            // If there is only one node in the linked list
            if (head-> next == nullptr){
                delete head; // Free Memory
                head = nullptr; // Set head to nullptr
                return;
            } 

            else{
                //deleting headusing temp variable
                node* temp = head;
                head = head->next ;
                delete temp;
            }
        }
};
int main(){
    LinkedList ll;

    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);
    ll.push(5);
    ll.push(6);

    cout << "Created Linked list" <<endl;
    ll.printList();

    ll.deletehead();
    cout << endl;

    cout << "Here is your linked list after I deleted " <<endl;
    ll.printList();
    cout << endl;

    return 0;
}