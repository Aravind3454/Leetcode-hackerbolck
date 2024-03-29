#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
pair<int, int> findRoses(vector<int>& prices, int money) {
    sort(prices.begin(), prices.end());
    int i = 0, j = prices.size() - 1;
    pair<int, int> result = {-1, -1};
    int minDiff = INT_MAX;
    while (i < j) {
        int total = prices[i] + prices[j];
        if (total == money) {
            int diff = abs(prices[i] - prices[j]);
            if (diff < minDiff) {
                result = {prices[i], prices[j]};
                minDiff = diff;
            }
            ++i;
            --j;
        } else if (total < money) {
            ++i;
        } else {
            --j;
        }
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        vector<int> prices(N);
        for (int i = 0; i < N; ++i) {
            cin >> prices[i];
        }
        int money;
        cin >> money;
        pair<int, int> result = findRoses(prices, money);
        cout << "Deepak should buy roses whose prices are " << result.first << " and " << result.second << "." << endl << endl;
    }

    return 0;
}