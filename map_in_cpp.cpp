#include <iostream>
#include<map>
#include<string>
using namespace std;
int main(){
//  map is an assoicative array    
    map<string , int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 68;
    marksMap["Rohan"] = 87;

    map<string , int> :: iterator itr;
    for(itr = marksMap.begin();itr!= marksMap.end();itr++){
        cout<<(*itr).first<<" "<< (*itr).second<<endl;
    }
return 0;
}