#include <iostream>

using namespace std;

int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    
    // Recursive call: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number to calculate its factorial: ";
    cin >> n;
    
    // Calculate the factorial of n
    int result = factorial(n);
    
    // Print the result
    cout << "The factorial of " << n << " is: " << result << endl;
    
    return 0;
}
