#include <iostream>
#include<climits>
using namespace std;
int linear(int N,int arr[],int M){
    
    for(int i=0;i<N;i++){
        if(arr[i] == M){
            return i;
        }

    }
    return -1;
}
int main(){
    int N,M;
    cin>>N;
    if(N<=0){
        return -1;
    }
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cin>>M;
    cout<<linear(N,arr,M);
    
return 0;
}