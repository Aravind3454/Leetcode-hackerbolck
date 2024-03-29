#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter the number of rows for first Matrix : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the number of columns for first Matrix: ";
    cin>>b;
    cout<<endl;
    cout<<"Enter the number of rows for second Matrix : ";
    cin>>c;
    cout<<endl;
    cout<<"Enter the number of columns for second Matrix : ";
    cin>>d;
    cout<<endl;
    if(b!=c){
        cout<<"Multiplication is not possible"<<endl;
    }
    else{
        cout<<"Enter elements of first matrix: "<<endl;
        int MA[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout<<"A"<<i+1<<","<<j+1<<":";
                cin>>MA[i][j];
                
            }
            
        }
        cout<<"Enter elements of Second matrix: ";
        int MB[c][d];
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                cout<<"A"<<i+1<<","<<j+1<<":";
                cin>>MB[i][j];
            }
        }
        cout<<"Result of Matrix multiplication is :"<<endl;
        int RE[a][d];
        for(int i =0;i<a;i++){
            for(int j=0;j<d;j++){
                RE[i][j]=0;
                for(int k=0;k<b;k++){
                    RE[i][j]+= MA[i][k]*MB[k][j];
                }
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                cout<<RE[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}