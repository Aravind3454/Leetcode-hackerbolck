#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findTriplets(vector<int>& arr, int target) {
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue; // Skip duplicates
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == target) {
                cout << arr[i] << ", " << arr[left] << " and " << arr[right] << "\n";
                while (left < right && arr[left] == arr[left + 1]) {
                    ++left; // Skip duplicates
                }
                while (left < right && arr[right] == arr[right - 1]) {
                    --right; // Skip duplicates
                }
                ++left;
                --right;
            } else if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    findTriplets(arr, target);

    return 0;
}