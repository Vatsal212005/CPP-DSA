#include <iostream>
#include <vector>

using namespace std;

// Function to recursively insert the last element of the array into the sorted sub-array arr[0..n-1]
void recursiveInsert(vector<int>& arr, int n) {
    // Base case: if only one element is left in the array, it is already sorted
    if (n <= 1)
        return;

    // Recursively insert the last element of the array into the sorted sub-array arr[0..n-2]
    recursiveInsert(arr, n - 1);

    // Store the last element of the array
    int last = arr[n - 1];
    int j = n - 2;

    // Move elements of arr[0..n-1] that are greater than last to one position ahead of their current position
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    // Insert last into its correct position
    arr[j + 1] = last;
}

int main() {
    vector<int> arr = {4, 2, 7, 1, 9};
    int n = arr.size();

    recursiveInsert(arr, n);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
