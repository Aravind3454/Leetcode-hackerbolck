#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool isPossible(int K, int time, const vector<int>& boards) {
    int painters = 1;
    int current_time = 0;

    for (int i = 0; i < boards.size(); ++i) {
        if (boards[i] > time) // If any board takes more time than the given time, it's not possible
            return false;

        if (current_time + boards[i] > time) { // Start painting a new segment
            current_time = boards[i];
            painters++;
        } else {
            current_time += boards[i];
        }
    }

    return painters <= K;
}

int minimumTime(int K, int N, const vector<int>& boards) {
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (isPossible(K, mid, boards))
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}

int main() {
    int K, N;
    cin >> K >> N;
    
    vector<int> boards(N);
    for (int i = 0; i < N; ++i) {
        cin >> boards[i];
    }

    cout << minimumTime(K, N, boards) << endl;

    return 0;
}
