#include <iostream>

using namespace std;

int reverse(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int result = reverse(num);
    cout << "Reversed number: " << result << endl;

    return 0;
}
