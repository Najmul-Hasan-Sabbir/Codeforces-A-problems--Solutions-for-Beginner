
/*   https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D    */


#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool prime_check(int n) {
    if (n == 0 || n == 1) {
    return false;
  }

  // loop to check if n is prime
  for (int i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      return false;
      break;
    }
}
return true;
}

int main() {
    int n;
    cin >> n;

    if (prime_check(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
