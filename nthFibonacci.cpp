#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int fib = 1;
    int prev = 0;
    for (int i = 2; i <= n; i++)
        {

            int temp = fib;
            fib += prev;
            prev = temp;
        }
    return fib;
    }


int main()
{   
    int n;
    cin>>n;
    cout<<fibo(n);

    return 0;
}