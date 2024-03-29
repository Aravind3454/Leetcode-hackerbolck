#include <iostream>
#include <unordered_map>

int fibonacci_memoization(int n, std::unordered_map<int, int>& memo) {
    if (n <= 1)
        return n;

    if (memo.find(n) == memo.end())
        memo[n] = fibonacci_memoization(n-1, memo) + fibonacci_memoization(n-2, memo);

    return memo[n];
}

int main() {
    int n = 10;  // Example value for n
    std::unordered_map<int, int> memo;
    std::cout << "Fibonacci(" << n << ") = " << fibonacci_memoization(n, memo) << std::endl;

    return 0;
}
