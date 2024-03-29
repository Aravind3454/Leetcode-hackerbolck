#include <iostream>
using namespace std;
int ssum(int arr[],int n){
    if(n==0){
        return 0;
    }
    int c_ans = ssum(arr,n-1);
    int m_ans = c_ans + arr[n-1];
    return m_ans; 
}
int main(){
    int arr[] = {3,4,5,6,7,8,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<ssum(arr,n);
    
    return 0;
}