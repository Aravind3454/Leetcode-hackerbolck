#include <iostream>
using namespace std;
void series(int n1,int n2){
     int count =0;
     int n =1;
     while (count<n1)
     {
        int ter = 3*n + 2;
        if(ter%n2 !=0){
            cout<<ter<<endl;
            count++;
        }
        n++;
     }
        

}
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    series(n1,n2);
return 0;
}