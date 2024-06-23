
#include<iostream>
#include<queue>
using namespace std;

int main() {
    // Declare a priority queue of integers (max-heap by default)
    priority_queue<int> pq;

    // Add elements to the priority queue
    pq.push(4);    // Add 4 to the priority queue
    pq.push(1);    // Add 1 to the priority queue
    pq.push(3);    // Add 3 to the priority queue
    pq.push(2);    // Add 2 to the priority queue

    // Print and remove elements from the priority queue
    cout << "Elements in the priority queue (in descending order): ";
    while (!pq.empty()) {
        cout << pq.top() << " "; // Print the top element
        pq.pop();                // Remove the top element
    }
    cout << endl;

    // Add elements to the priority queue again
    pq.push(5);    // Add 5 to the priority queue
    pq.push(6);    // Add 6 to the priority queue

    // Access the top element of the priority queue
    int topElement = pq.top(); // Get the top element (6)

    // Print the top element
    cout << "Top element: " << topElement << endl;

    return 0;
}
