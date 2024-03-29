#include <iostream>
using namespace std;
void check(unsigned long  int N){ // N is the car number 
    unsigned long int x =0; // x is digit
    long int eve = 0;
    long int odd = 0;
    while (N!=0)
    {
        x = N%10;
        if(x%2==0){
            eve +=x; // sum of all even numbers in car
        }
        else {
            odd += x; // sum of all odd nos
        }
        N /=10; // Number is updated 
    }
    
    if(eve%4 == 0 ){
        cout<<"Yes"<<endl;
    }
    else if(odd%2 !=0 && odd%3 ==0){
        cout<<"Yes"<<endl;;
    }
    else {
        cout<<"No";
    }
}
int main(){
    int n;
    cin>>n;
    unsigned long int N[n];
    for(int i=0;i<n;i++){
        cin>>N[i];
        
    }
    for(int i=0;i<n;i++){
        check(N[i]);
        }
    
    return 0;
}