#include <iostream>
using namespace std;
// given 2 sorted array arr[a]> array[b] merge them in sorted order in arr[a]
void merge_sorted(int a,int arr[],int b,int ar[]){
    int temp = 0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i]>ar[j]){
                swap(arr[i],ar[j]);
                
            }
        }
    }
}
int main(){
    int a = 10;
    int arr[a] = {1,6,7,8,9,10,0,0,0,0};
    int b = 4;
    int ar[b] = {2,3,5,7};

    
return 0;
}