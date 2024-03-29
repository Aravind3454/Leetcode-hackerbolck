#include <iostream>
using namespace std;
int solved_ques(int n,int arr[][3]){
    
    int count = 0;
    for(int i=0;i<n;i++){
        int inner_count = 0;
        for(int j=0;j<3;++j){
            if(arr[i][j] == 1){
                inner_count += arr[i][j]; 
            }
        }    
        if(inner_count >=2){
            count ++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;++j){
            cin>>arr[i][j];
        }
    }
    cout<<solved_ques(n,arr);
    
    return 0;
}