#include <iostream>
using namespace std;
void rev_inran(int arr[]){
    int i = 3;
    int j = 7;
    int temp;
    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
    int k;
    cin>>k;
    for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<=n;i++){
        
        cout<<arr[i]<<" ";
    }
return 0;
}