#include <iostream>
#include <algorithm>
using namespace std;
void findPairs(int array[], int n, int target) {
    sort(array, array + n);

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = array[left] + array[right];
        if (sum == target) {
            cout << array[left] << " and " << array[right] << "\n";
            ++left;
            --right;
        } else if (sum < target) {
            ++left;
        } else {
            --right;
        }
    }
}

int main() {
    int N;
    cin >> N;

    int array[N];
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    int target;
    cin >> target;

    findPairs(array, N, target);

    return 0;
}