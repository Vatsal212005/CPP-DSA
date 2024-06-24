#include <iostream>
using namespace std;

void printName(int current, int n, const char name[]) {
    // Base case: if current exceeds n, return
    if (current > n) {
        return;
    }
    
    // Print the name
    cout << name << endl;
    
    // Recursive call: print name for the next count
    printName(current + 1, n, name);
}

int main() {
    int n;
    char name[100];
    
    cout << "Enter the name you want to print: ";
    cin >> name;
    
    cout << "Enter the number of times you want to print the name: ";
    cin >> n;
    
    // Start the printing from 1
    printName(1, n, name);
    
    return 0;
}
