
/*

problem link: https://codeforces.com/problemset/problem/80/A

   */


#include<bits/stdc++.h>
using namespace std;

bool prime_check(int n) {
    if (n <= 1) return false;  // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  // n is divisible by i, so it's not prime
        }
    }
    return true;  // n is prime
}

int main() {
    int n, m;
    cin >> n >> m;

    // Find the next prime after n
    int next_prime = -1;
    for (int i = n + 1; ; i++) {
        if (prime_check(i)) {
            next_prime = i;
            break;
        }
    }

    // Check if the next prime is m
    if (next_prime == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
