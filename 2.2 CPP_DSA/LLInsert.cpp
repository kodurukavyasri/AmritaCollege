#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head; // Pointer to the first node

public:
    LinkedList() {
        head = nullptr; // Initialize head to null
    }

    // Method to insert a node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head; // Point new node to current head
        head = newNode; // Update head to new node
    }

    // Method to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode; // If list is empty, make new node the head
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next; // Traverse to the last node
        }
        temp->next = newNode; // Link last node to new node
    }

    // Method to print the linked list
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next; // Move to the next node
        }
        cout << "nullptr" << endl; // End of list
    }

    // Destructor to free memory
    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp; // Free memory of nodes
        }
    }
};

int main() {
    LinkedList list;
    
    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    
    cout << "Linked List: ";
    list.printList(); // Output: 10 -> 20 -> 30 -> nullptr

    return 0;
}
