#include <iostream>
using namespace std;

int main() {
    // First pair
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    // Pair of pairs
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    return 0;
}
