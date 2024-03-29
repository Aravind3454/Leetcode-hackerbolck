#include <iostream>
using namespace std;
void reverse_arr(int arr[],int n){
    int low = 0;
    int high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    
}
int main(){
    int n;
    cin>>n;
    if(n<=0){
        return -1;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse_arr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}