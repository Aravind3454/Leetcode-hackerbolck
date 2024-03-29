#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> c(4);
        for(int i=0; i<4; i++) cin >> c[i];
        int n, m;
        cin >> n >> m;
        vector<int> rickshaw(n), cab(m);
        for(int i=0; i<n; i++) {
            cin >> rickshaw[i];
            rickshaw[i] = min(rickshaw[i]*c[0], c[1]);
        }
        for(int i=0; i<m; i++) {
            cin >> cab[i];
            cab[i] = min(cab[i]*c[0], c[1]);
        }
        int totalRickshaw = accumulate(rickshaw.begin(), rickshaw.end(), 0);
        int totalCab = accumulate(cab.begin(), cab.end(), 0);
        totalRickshaw = min(totalRickshaw, c[2]);
        totalCab = min(totalCab, c[2]);
        cout << min(c[3], totalRickshaw + totalCab) << "\n";
    }
    return 0;
}