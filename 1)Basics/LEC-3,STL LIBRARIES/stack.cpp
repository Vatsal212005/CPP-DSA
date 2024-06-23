#include<iostream>
#include<stack>
using namespace std;

int main() {
    // Declare a stack of integers
    stack<int> st;

    // Add elements to the stack
    st.push(1);    // Add 1 to the top of the stack
    st.push(2);    // Add 2 to the top of the stack
    st.push(3);    // Add 3 to the top of the stack
    st.push(4);    // Add 4 to the top of the stack

    // Print and remove elements from the stack
    cout << "Elements in the stack (from top to bottom): ";
    while (!st.empty()) {
        cout << st.top() << " "; // Print the top element
        st.pop();                // Remove the top element
    }
    cout << endl;

    // Add elements to the stack again
    st.push(5);    // Add 5 to the top of the stack
    st.push(6);    // Add 6 to the top of the stack

    // Access the top element of the stack
    int topElement = st.top(); // Get the top element (6)

    // Print the top element
    cout << "Top element: " << topElement << endl;

    return 0;
}
