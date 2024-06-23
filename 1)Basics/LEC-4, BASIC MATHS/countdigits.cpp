#include <iostream>
using namespace std;

int countDividingDigits(int N) {
    int originalN = N;
    int count = 0;

    while (N > 0) {
        int digit = N % 10;  // Get the last digit
        N /= 10;             // Remove the last digit
        
        // Check if the digit is non-zero and divides the original number
        if (digit != 0 && originalN % digit == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int result = countDividingDigits(N);
    cout << "Number of digits in " << N << " that evenly divide it: " << result << endl;

    return 0;
}
