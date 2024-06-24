#include <iostream>

using namespace std;

void reverseArray(int arr[], int start, int end) {
    // Base case: if start index is greater than or equal to end index, stop recursion
    if (start >= end) {
        return;
    }
    
    // Swap the elements at start and end
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    // Recursive call: move to the next set of elements
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    const int maxSize = 100; // Maximum size of the array
    int arr[maxSize];
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    if (n > maxSize) {
        cout << "Array size exceeds maximum size." << endl;
        return 1;
    }
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Reverse the array
    reverseArray(arr, 0, n - 1);
    
    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
