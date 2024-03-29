#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int x, n;
        cin >> x >> n;

        int avg = x / n;
        int rem = x % n;

        int extra_candies = 0;
        if (rem > n / 2) {
            extra_candies = n - rem;
        } else {
            extra_candies = rem;
        }

        cout << extra_candies << endl;
    }

    return 0;
}