#include <iostream>
#include <climits>
using namespace std;

void spe_sum(int n, int Ai[], int Q, int ar[]) {
    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < n; j++) {
            int x = j - i;
            if (x < 0) {
                Ai[j] = Ai[j] + Ai[n - j - 1]; 
            } else {
                Ai[j] = Ai[j] + Ai[ar[j - i]]; 
            }
        }
    }
    
    
}

int main() {
    int n, Q,sum =0;;
    cin >> n;
    int Ai[n];
    for (int i = 0; i < n; ++i) {
        cin >> Ai[i];
    }
    cin >> Q;
    int ar[Q];
    for (int i = 0; i < Q; i++) {
        cin >> ar[i];
    }
    spe_sum(n, Ai, Q, ar);
    for (int i = 0; i < n; i++) {
        sum += Ai[i];
    }
    cout<<sum;
    return 0;
}
