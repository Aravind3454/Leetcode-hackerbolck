// C++ program to find LCM of 2 numbers 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return LCM of two numbers 
int LCM(int a, int b) 
{ 
	int greater = max(a, b); 
	int smallest = min(a, b); 
	for (int i = greater; ; i += greater) { 
        // This ; ; is for not specifying the condition of for loop 
        // it will continue indefininetely until a return statement is in the loop  
		if (i % smallest == 0) 
			return i; 
	} 
} 

// Driver program to test above function 
int main() 
{ 
	int a = 10, b = 5; 
	cout << "LCM of " << a << " and "
		<< b << " is " << LCM(a, b); 
	return 0; 
}
