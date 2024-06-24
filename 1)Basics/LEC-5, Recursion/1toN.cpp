#include <iostream>

using namespace std;

void printNumbers(int current, int n) {
    // Base case: if current exceeds n, return
    if (current > n) {
        return;
    }
    
    // Print the current number
    cout << current << " ";
    
    // Recursive call: print the next number
    printNumbers(current + 1, n);
}

int main() {
    int n;
    cout << "Enter the number up to which you want to print: ";
    cin >> n;
    
    // Start printing from 1
    printNumbers(1, n);
    
    return 0;
}
