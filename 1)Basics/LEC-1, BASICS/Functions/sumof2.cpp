#include<iostream>
using namespace std;

int addNum(int n1, int n2) {
    int num3 = n1 + n2;
    return num3;
}

int main() {
    int n1, n2;  // Declare variables without 'int' before them again
    cin >> n1 >> n2;  // Input values for n1 and n2
    int res = addNum(n1, n2);  // Call addNum function and store result in res
    cout << res;  // Output the result
    return 0;
}
