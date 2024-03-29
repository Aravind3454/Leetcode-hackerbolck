#include <iostream>
using namespace std;
void push_0(int n,int arr[]){
    int i = 0;
    int j = 0;
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

}

int main(){
    int n = 8;
    int arr[n] = {0,4,3,6,5,0,1,2};
    push_0(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
