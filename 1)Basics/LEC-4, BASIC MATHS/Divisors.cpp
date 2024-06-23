#include <iostream>

using namespace std;

void printDivisors(int num) {
    cout << "Divisors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printDivisors(num);

    return 0;
}
