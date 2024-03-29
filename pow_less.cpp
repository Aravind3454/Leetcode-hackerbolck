#include <iostream>
#include <cmath>
using namespace std;

int greatest_x(long long n, int k) {
    int low = 1, high = n;
    long long result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (pow(mid, k) <= n) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    long long arr[t][2];
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 2; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < t; i++) {
        cout << greatest_x(arr[i][0], arr[i][1]) << endl;
    }

    return 0;
}