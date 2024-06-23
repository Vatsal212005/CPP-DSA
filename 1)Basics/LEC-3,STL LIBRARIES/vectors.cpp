#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Declare a vector of integers (a dynamic array)
    vector<int> v;

    // Add elements to the vector
    v.push_back(1);    // Add 1 to the end of the vector
    v.emplace_back(2); // Add 2 to the end of the vector (emplace_back is just faster)

    // Declare a vector of pairs of integers
    vector<pair<int, int>> vec;

    // Add pairs to the vector
    vec.push_back({1, 2});  // Add pair (1, 2) to the vector
    vec.emplace_back(1, 2); // Add pair (1, 2) to the vector

    // Create a vector with 5 elements, all set to 100
    vector<int> vec1(5, 100);

    // Create a vector with 5 elements, not initialized (they are 0 by default)
    vector<int> v2(5);

    // Accessing elements in a vector
    cout << "Using array-style indexing:" << endl;
    cout << v[0] << " " << v[1] << endl; // Print first and second elements

    cout << "Using iterators:" << endl;
    // Using an iterator to access elements
    vector<int>::iterator it = v.begin(); // Iterator points to the start of the vector
    it++; // Move iterator to the next element
    cout << *it << endl; // Print the element at the iterator position

    // Printing the entire vector using iterators
    cout << "Printing the vector using iterators:" << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " "; // Print each element
    }
    cout << endl;

    // Simplified method of printing using auto keyword
    cout << "Printing the vector using auto keyword:" << endl;
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " "; // Print each element
    }
    cout << endl;

    // Simplified method using range-based for loop
    cout << "Printing the vector using range-based for loop:" << endl;
    for (auto element : v) {
        cout << element << " "; // Print each element
    }
    cout << endl;

    // Erase elements from the vector
    v.erase(v.begin() + 1); // Remove the second element
    // Now v is {1}

    // Erase a range of elements
    v.push_back(20); // Adding more elements to demonstrate
    v.push_back(12);
    v.push_back(23);
    v.erase(v.begin() + 2, v.begin() + 4); // Remove elements from index 2 to 3
    // Now v is {1, 20}

    // Insert elements into the vector
    vector<int> v3(2, 100); // Create a vector {100, 100}
    v3.insert(v3.begin(), 300); // Insert 300 at the beginning
    // Now v3 is {300, 100, 100}
    v3.insert(v3.begin() + 1, 2, 10); // Insert two 10s at index 1
    // Now v3 is {300, 10, 10, 100, 100}

    // Insert a range of elements from another vector
    vector<int> copy{50, 50}; // Create a vector {50, 50}
    v3.insert(v3.begin(), copy.begin(), copy.end()); // Insert elements of copy at the beginning
    // Now v3 is {50, 50, 300, 10, 10, 100, 100}

    // Print size of the vector
    cout << "Size of v3: " << v3.size() << endl;

    // Remove the last element
    v3.pop_back(); // Now v3 is {50, 50, 300, 10, 10, 100}

    // Swap contents of two vectors
    vec1.swap(v2); // Swapping vec1 and v2

    // Clear all elements from the vector
    v.clear();
    cout << "Is v empty? " << (v.empty() ? "Yes" : "No") << endl;

    return 0;
}
