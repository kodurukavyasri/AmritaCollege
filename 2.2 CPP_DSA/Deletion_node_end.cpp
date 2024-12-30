#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
    node(int value) : data(value), next(nullptr){}
};

class LinkedList{
    private:
        node*head;
    
    public:
        LinkedList() : head(nullptr){}

    // Function to insert a new node at the begining
        void push(int new_data){
            node* new_node = new node(new_data);
            new_node-> next = head;
            head = new_node;
        }
    
    // Function to print the linked list
        void printList(){
            node* current = head;
            while(current){
                cout << current->data << "->";
                current = current->next;
            }
            cout << "nullptr" << endl;
        }

    // Function to delete the last node
        void deleteEnd(){
            //If the given list is empty!
            if (head == nullptr){
                cout << "Oops!!The given list is empty!" << endl;
                return;
            }

            // If there is only one node in the linked list
            if (head-> next == nullptr){
                delete head; // Free Memory
                head = nullptr; // Set head to nullptr
                return;
            }

            else{ 
                node* second_last = head;
                //Find the second last node!
                while(second_last->next->next != nullptr){
                    second_last = second_last->next;      
                }
                // remove the second last node
                delete second_last->next;
                second_last->next = nullptr;
                return;
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

    cout << "Created linked list" << endl;
    ll.printList();

    ll.deleteEnd();
    cout << endl;

    cout << "here is your linked list after I deleted at the end!" << endl;
    ll.printList();
    cout << endl;

    return 0;
}