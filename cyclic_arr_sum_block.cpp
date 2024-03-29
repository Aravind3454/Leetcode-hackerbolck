#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n;
    vector<ll> a(n), b(n), c(n+1);
    for(int i=0; i<n; i++) cin >> a[i];
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        for(int i=0; i<n; i++) b[i] = (a[i] + a[(i-x+n)%n]) % MOD;
        a = b;
    }
    ll sum = 0;
    for(int i=0; i<n; i++) sum = (sum + a[i]) % MOD;
    cout << sum;
    return 0;
}