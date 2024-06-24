#include <iostream>

using namespace std;

// Function to perform a single pass of Bubble Sort on the array
void bubblePass(int arr[], int n) {
    // Base case: if only one element is left in the array, it is already sorted
    if (n == 1)
        return;

    // Perform a single pass of Bubble Sort to move the largest element to the end
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            // Swap arr[i] and arr[i + 1]
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Recursively call bubblePass on the reduced array (excluding the last element)
    bubblePass(arr, n - 1);
}

// Function to perform Recursive Bubble Sort on the array
void recursiveBubbleSort(int arr[], int n) {
    // Base case: if the array has only one element or is empty, it is already sorted
    if (n <= 1)
        return;

    // Perform a single pass of Bubble Sort and recursively call recursiveBubbleSort
    bubblePass(arr, n);
    recursiveBubbleSort(arr, n - 1);
}

int main() {
    int arr[] = {4, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    recursiveBubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
