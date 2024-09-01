
/*
problem:
https://codeforces.com/problemset/problem/1328/A

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int remainder = a % b;
        int result = (remainder == 0) ? 0 : (b - remainder);

        cout << result << endl;
    }

    return 0;
}
