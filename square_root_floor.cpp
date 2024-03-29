#include <iostream>
using namespace std;

int squareroot(int x) {
    int low = 1, high = x;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (mid * mid == x) {
            return mid;
        } else if (mid * mid < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low - 1;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Square root: " << squareroot(x) << endl;
    return 0;
}