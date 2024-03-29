#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }    
    int output[n];
    for(int i=0;i<n;i++){
        output[i] *= arr[i+1];
    }
return 0;
}