#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        numDigits++;
    }

    originalNum = num;

    // Calculate sum of digits raised to the power of number of digits
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, numDigits);
        originalNum /= 10;
    }

    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
