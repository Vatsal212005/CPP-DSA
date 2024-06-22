#include<iostream>
using namespace std;

void nTriangle(int n) {
    for(int i = 1; i <= n; i++) {  // Loop from 1 to n
        for(int j = 1; j <= i; j++) {  // Loop from 1 to i
            cout << j << " ";  // Print the current value of j followed by a space
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    nTriangle(n);
    return 0;
}