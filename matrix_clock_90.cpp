#include <iostream>
using namespace std;
int main(){
 
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i= 0;i<n;i++){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }      
    cout<<endl;
    int array[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            array[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}