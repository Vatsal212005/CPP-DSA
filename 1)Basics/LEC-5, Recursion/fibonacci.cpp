#include <iostream>

using namespace std;

int fibonacci(int n) {
    // Base cases: fib(0) = 0 and fib(1) = 1
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    // Recursive case: fib(n) = fib(n-1) + fib(n-2)
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " terms: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
