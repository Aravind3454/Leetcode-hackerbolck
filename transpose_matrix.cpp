#include <iostream>
using namespace std;
int main(){
 
    int n;
    cin>>n;
    int arr[n][n];
    for(int i= 0;i<n;i++){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }      
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            array[i][j] = arr[j][i];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
return 0;
}