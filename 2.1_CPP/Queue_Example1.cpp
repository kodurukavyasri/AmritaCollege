#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    //Declaration of a queue of integers
    queue<string> myQueue;

    // Enqueue elements into the queue
    myQueue.push("y"); //push to push inside the quque
    myQueue.push("s");
    myQueue.push("t");

    //Check if the quque is empty

    if (myQueue.empty()){
        cout << "Queue is empty.\n";
    } else{
        cout << "Queue is not empty.\n";
    }

    //Access the front element of the queue
    cout << "Front element: " << myQueue.front() <<"\n";

    //Access the back element of the quque
    cout << "Back element: " << myQueue.back() <<"\n";

    //Dequeue the front element form the queue 
    myQueue.pop();  //pop to move out of the queue

    //Size of the queue
    cout << "Size of the queue:" << myQueue.size() << "\n";
    while (!myQueue.empty()){
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << "\n";

    return 0;

}