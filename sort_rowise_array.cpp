#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
     for (int i = 0; i < m; i++) {
        sort(arr[i], arr[i] + n);
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
return 0;
}