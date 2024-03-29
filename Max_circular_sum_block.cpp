#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll total = 0, max_straight_sum = LLONG_MIN, min_straight_sum = LLONG_MAX, temp_max = 0, temp_min = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            total += a[i];
            temp_max = max(temp_max + a[i], a[i]);
            max_straight_sum = max(max_straight_sum, temp_max);
            temp_min = min(temp_min + a[i], a[i]);
            min_straight_sum = min(min_straight_sum, temp_min);
        }
        if(max_straight_sum < 0) cout << max_straight_sum << "\n";
        else cout << max(max_straight_sum, total - min_straight_sum) << "\n";
    }
    return 0;
}