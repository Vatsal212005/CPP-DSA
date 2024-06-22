#include<iostream>
using namespace std;

void triangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    triangle(n);
    return 0;
}