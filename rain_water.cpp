#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findWater(vector<int>& arr, int n) {
    vector<int> left(n), right(n);
    int water = 0;
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
       left[i] = max(left[i-1], arr[i]);
    right[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
       right[i] = max(right[i+1], arr[i]);
    for (int i = 0; i < n; i++)
       water += min(left[i],right[i]) - arr[i];
    return water;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cout << findWater(arr, N) << endl;
    }
    return 0;
}