#include <iostream>
using namespace std;
void inverse(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    if(arr[low] == 0){
        low++;
        inverse(arr,low,high);
    }
    if(arr[high] == 0){
        high--;
        inverse(arr,low,high);
    }
    swap(arr[low],arr[high]);
    inverse(arr,low+1,high -1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    inverse(arr,1,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}