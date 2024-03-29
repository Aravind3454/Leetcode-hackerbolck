#include <iostream>
using namespace std;
void coun(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    coun(n-1);
    }
int main(){
    int n;
    cin>>n;
    coun(5);
    
return 0;
}