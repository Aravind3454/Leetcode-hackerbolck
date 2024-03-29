#include <iostream>
#include <vector>
using namespace std;
void run(int a,int n,int  nums[]){
    for(int i=0;i<n;i++){
        for(int j=0;i<n;i++){
            if(i==j){
                nums[j] *= nums[j];
                continue; 
            } 
        }
        cout<<nums[i]<<" ";
    }
    

}
int main(){
    int nums[4]= { 12,24,36,15};
    int a;
    cin>>a;
    run(a,4,nums);
return 0;
}