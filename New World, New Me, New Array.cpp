/*


Link: https://codeforces.com/contest/2072/problem/A


*/



#include <iostream>
using namespace std;

void solve() {
    int n, k, p;
    cin >> n >> k >> p;


    if (k == 0) {
        cout << 0 << endl;
        return;
    }


    if (k > n * p || k < n * (-p)) {
        cout << -1 << endl;
        return;
    }


    int operations;


    if (k > 0) {

        operations = (k + p - 1) / p;
        if (operations <= n) {
            cout << operations << endl;
        } else {
            cout << -1 << endl;
        }
    }

    else {

        operations = (-k + p - 1) / p;
        if (operations <= n) {
            cout << operations << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
