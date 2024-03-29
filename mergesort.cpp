#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArray[n1];
    int rightArray[n2];

    for (int i = 0; i < n1; i++)
        leftArray[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        rightArray[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k++] = leftArray[i++];
        } else {
            arr[k++] = rightArray[j++];
        }
    }

    while (i < n1) {
        arr[k++] = leftArray[i++];
    }

    while (j < n2) {
        arr[k++] = rightArray[j++];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    mergeSort(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
