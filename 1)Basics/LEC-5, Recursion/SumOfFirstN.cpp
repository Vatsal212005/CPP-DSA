#include <iostream>

using namespace std;

int sumNumbers(int n) {
    // Base case: if n is 1, return 1
    if (n == 1) {
        return 1;
    }
    
    // Recursive call: sum of current number and the sum of numbers before it
    return n + sumNumbers(n - 1);
}

int main() {
    int n;
    cout << "Enter the number up to which you want to sum: ";
    cin >> n;
    
    // Calculate the sum of the first n numbers
    int sum = sumNumbers(n);
    
    // Print the result
    cout << "The sum of the first " << n << " numbers is: " << sum << endl;
    
    return 0;
}
