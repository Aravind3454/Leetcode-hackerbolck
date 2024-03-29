#include <iostream>
#include <vector>
using namespace std;

void sortArray(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;
    while(mid <= high) {
        switch(arr[mid]) {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sortArray(arr);
    for(int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}