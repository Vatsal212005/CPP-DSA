#include<iostream>
#include<queue>
using namespace std;

int main() {
    // Declare a queue of integers
    queue<int> q;

    // Add elements to the queue
    q.push(1);    // Add 1 to the end of the queue
    q.push(2);    // Add 2 to the end of the queue
    q.push(3);    // Add 3 to the end of the queue
    q.push(4);    // Add 4 to the end of the queue

    // Print and remove elements from the queue
    cout << "Elements in the queue (from front to back): ";
    while (!q.empty()) {
        cout << q.front() << " "; // Print the front element
        q.pop();                  // Remove the front element
    }
    cout << endl;

    // Add elements to the queue again
    q.push(5);    // Add 5 to the end of the queue
    q.push(6);    // Add 6 to the end of the queue

    // Access the front and back elements of the queue
    int frontElement = q.front(); // Get the front element (5)
    int backElement = q.back();   // Get the back element (6)

    // Print the front and back elements
    cout << "Front element: " << frontElement << endl;
    cout << "Back element: " << backElement << endl;

    return 0;
}
