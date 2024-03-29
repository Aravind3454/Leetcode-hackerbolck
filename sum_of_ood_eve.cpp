#include<iostream>
using namespace std;

int main(){
	long long N;
	cin>>N;

	int odd_sum=0,even_sum=0;
	bool is_odd=true;

	while(N>0){
		int digit=N%10;
		if(is_odd){
			odd_sum+=digit;
		}else{
			even_sum+=digit;
		}
		is_odd=!is_odd;
		N/=10;
	}

	cout << odd_sum << endl;
	cout << even_sum<< endl;

	return 0;
}