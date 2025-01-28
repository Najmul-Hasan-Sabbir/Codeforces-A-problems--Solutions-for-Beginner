
/*

Link: https://codeforces.com/contest/2062/problem/A




                           */



 #include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool possible = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] <= max(2 * (n - 1 - i), 2 * i)) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
