#include <iostream>
using namespace std;

void rever(int arr[], int size) {
    int u = 0;
    int temp;
    int j = size-1;
    for(int i = 0; i < size; i++) {
        temp = arr[u];
        arr[u] = arr[j];
        arr[j] = temp;
        u++;
    }
}

int main() {
    int k;
    int arr[] = {4, 2, 51, 24, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    cin >> k;
    for(int i =0;i<k;i++){
        rever(arr, n);
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
