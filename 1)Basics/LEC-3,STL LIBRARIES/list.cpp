#include<iostream>
#include<list>
using namespace std;

int main() {
    // Declare a list of integers
    list<int> ls;

    // Add elements to the end of the list
    ls.push_back(2);    // Add 2 to the end of the list -> {2}
    ls.emplace_back(4); // Add 4 to the end of the list -> {2, 4}

    // Add elements to the front of the list
    ls.push_front(5);   // Add 5 to the front of the list -> {5, 2, 4}
    ls.emplace_front(1); // Add 1 to the front of the list -> {1, 5, 2, 4}

    // Print the elements of the list
    cout << "Elements in the list: ";
    for (auto element : ls) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
//rest are same as vectors
