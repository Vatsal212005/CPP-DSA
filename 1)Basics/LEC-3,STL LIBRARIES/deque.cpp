#include<iostream>
#include<deque>
using namespace std;

int main() {
    // Declare a deque (double-ended queue) of integers
    deque<int> dq;

    // Add elements to the end of the deque
    dq.push_back(1);    // Add 1 to the end of the deque -> {1}
    dq.emplace_back(2); // Add 2 to the end of the deque -> {1, 2}

    // Add elements to the front of the deque
    dq.push_front(4);   // Add 4 to the front of the deque -> {4, 1, 2}
    dq.emplace_front(3); // Add 3 to the front of the deque -> {3, 4, 1, 2}

    // Remove elements from the deque
    dq.pop_back();  // Remove the last element -> {3, 4, 1}
    dq.pop_front(); // Remove the first element -> {4, 1}

    // Access elements at the back and front
    int backElement = dq.back();   // Get the last element (1)
    int frontElement = dq.front(); // Get the first element (4)

    // Print the elements of the deque
    cout << "Elements in the deque: ";
    for (auto element : dq) {
        cout << element << " ";
    }
    cout << endl;

    // Print the back and front elements
    cout << "Back element: " << backElement << endl;
    cout << "Front element: " << frontElement << endl;

    return 0;
}
