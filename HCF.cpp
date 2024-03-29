#include <iostream>
using namespace std;
int HCF(int N1,int N2){
    int x = min(N1,N2);
    int hcf =1;
    for(int i=2;i<=x;i++){
        if(N1%i ==0 && N2%i ==0){
            hcf = i;
            
        }
    }
    return hcf;
}
int main(){
 int a=16;
 int b =24;
 cout<<HCF(a,b);
    
return 0;
}