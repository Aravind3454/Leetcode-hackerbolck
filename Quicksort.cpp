#include <iostream>
using namespace std;


void quicksort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = arr[left];
        int i = left + 1;
        int j = right;
        while (i <= j) {
            while (i <= j && arr[i] < pivot) {
                i++;
            }
            while (i <= j && arr[j] > pivot) {
                j--;
            }
            if (i <= j) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
        swap(arr[left], arr[j]);
        quicksort(arr, left, j - 1);
        quicksort(arr, j + 1, right);
    }
}


int main() {
    int arr[] = {6,45,89,25,61,78,24,35};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Unsorted Array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    
    cout<<endl;

    quicksort(arr, 0, n - 1);

    cout<<"Sorted array is : ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;


    return 0;
}
