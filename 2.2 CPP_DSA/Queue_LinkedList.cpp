#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;       // Data part
    Node* next;     // Pointer to next node

    Node(int value) : data(value), next(nullptr) {} // Constructor
};

// Queue class using linked list
class Queue {
private:
    Node* front; // Pointer to the front node
    Node* rear;  // Pointer to the rear node

public:
    Queue() : front(nullptr), rear(nullptr) {} // Constructor initializes pointers to nullptr

    // Enqueue operation
    void enqueue(int new_data) {
        Node* new_node = new Node(new_data); // Create new node
        if (rear == nullptr) { // If queue is empty
            front = rear = new_node; // Both front and rear point to new node
            cout << "Enqueued " << new_data << endl;
            return;
        }
        rear->next = new_node; // Link new node at rear
        rear = new_node;       // Update rear to new node
        cout << "Enqueued " << new_data << endl;
    }

    // Dequeue operation
    int dequeue() {
        if (front == nullptr) { // If queue is empty
            cout << "Queue is empty! Unable to dequeue." << endl;
            return -1; // Return an error value
        }
        int dequeued_value = front->data; // Get data from front node
        Node* temp = front;                // Temporary pointer to delete node
        front = front->next;               // Move front pointer to next node
        if (front == nullptr) {            // If front becomes NULL, update rear as well
            rear = nullptr;
        }
        delete temp;                       // Free memory of dequeued node
        return dequeued_value;             // Return dequeued value
    }

    // Peek operation
    int peek() {
        if (front == nullptr) { // If queue is empty
            cout << "Queue is empty!" << endl;
            return -1; // Return an error value
        }
        return front->data; // Return data from front node
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == nullptr); // If front is nullptr, queue is empty
    }

    ~Queue() { // Destructor to free memory
        while (!isEmpty()) {
            dequeue(); // Dequeue all elements from queue
        }
    }
};

// Example usage of Queue class
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element is: " << q.peek() << endl; // Should output 10

    cout << "Dequeued element: " << q.dequeue() << endl; // Should output 10

    cout << "Front element after dequeue: " << q.peek() << endl; // Should output 20

    while (!q.isEmpty()) {
        cout << "Dequeued element: " << q.dequeue() << endl;
    }

    q.dequeue(); // Attempt to dequeue from an empty queue

    return 0;
}
