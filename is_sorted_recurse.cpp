#include <iostream>
using namespace std;
int sorr(int arr[],int n){
    if(n==0){
        return 0;
    }
    bool ans = sorr(arr,n-1);
    if(arr[n-1]<arr[n-2]){
        int temp =arr[n-1];
        arr[n-1] = arr[n-2];
        arr[n-2] = temp;
    }
    
}
int main(){
    
    
    return 0;
}

