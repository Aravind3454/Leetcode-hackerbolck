#include <iostream>
using namespace std;
int main(){
    int n;
    int s = 0;
    cin>>n;
    int arr[n],sum[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        s += arr[i];
        sum[i] = s;
    }
    for(int i=0;i<n;i++){
        cout<<sum[i]<<" ";
    }
return 0;
}