#include<iostream>
#include<cmath>
using namespace std;

int inverseNumber(int num) {
	int result=0;
	int position=1;
	while (num>0){
		int digit = num%10;
		result += position*pow(10,digit - 1);
		num /= 10;
		position++;
	}
	return result;
}
int main(){
	int number;
	cin>>number;
	int inverse = inverseNumber(number);
	cout<<inverse;
	return 0;
}