#include <iostream>
using namespace std;

#define SIZE 5 // Define the maximum size of the queue

class Queue {
private:
    int items[SIZE]; // Array to hold the queue elements
    int front, rear; // Front and rear indices

public:
    Queue() { // Constructor to initialize the queue
        front = -1;
        rear = -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        return (rear == SIZE - 1);
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Function to add an element to the queue
    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (front == -1) { // First element being added
            front = 0;
        }
        rear++;
        items[rear] = element; // Add the new element
        cout << "Inserted " << element << endl;
    }

    // Function to remove an element from the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1; // Return an error value
        }
        int removedElement = items[front];
        front++;
        return removedElement; // Return the removed element
    }

    // Function to get the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1; // Return an error value
        }
        return items[front]; // Return the front element
    }
};

// Example usage of the Queue class
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    cout << "Front element is: " << q.peek() << endl;

    cout << "Dequeued: " << q.dequeue() << endl;
    
    cout << "Front element after dequeue: " << q.peek() << endl;

    while (!q.isEmpty()) {
        cout << "Dequeued: " << q.dequeue() << endl;
    }

    q.dequeue(); // Attempt to dequeue from an empty queue

    return 0;
}
