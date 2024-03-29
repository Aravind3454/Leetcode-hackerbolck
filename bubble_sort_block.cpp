#include <iostream>
#include<vector>
using namespace std;
void bubble(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        for(int j=0;j<arr.size();j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp; 
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    if(n<=0){
        return 1;
    }
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}