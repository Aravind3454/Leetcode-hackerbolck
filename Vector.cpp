#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> d;
    d.push_back(10);
    d.push_back(20);
    for(int i= 0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

    d.pop_back();
    cout<<"Elements after using pop_back "<<endl;
    for(int j=0;j<d.size();j++){
        cout<<d[j]<<" ";
    }
    cout<<endl;
    cout<<"Maximum size of elements a vector can hold: "<<d.max_size()<<endl;
    cout<<"Is d vector empty or not "<<endl;
    if(d.empty() == false){
        cout<<"d vector has elements ";
        for(int i =0;i<d.size();i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
    } 
    else{
        cout<<"d vector has no elements ";
        
    }
    cout<<"Element at position 0 is "<<d.at(0)<<endl;
    return 0;
}