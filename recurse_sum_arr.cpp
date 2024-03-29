#include <iostream>
#include<vector>
using namespace std;
int ssum(int arr[] ,int size){
    int s =0;
    for(int i=0;i<size;i++){
        s += arr[i];
        
    }
    return s;
}
int main(){
    int arr[] = {3,4,5,6,7,8,1,2};
    int size = 8;
    cout<<ssum(arr,size);
    return 0;
}