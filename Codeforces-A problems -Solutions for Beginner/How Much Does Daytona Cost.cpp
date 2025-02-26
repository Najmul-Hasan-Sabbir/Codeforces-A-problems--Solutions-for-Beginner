/*

Link: https://codeforces.com/problemset/problem/1878/A

*/


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for(int i = 0; i < n; i++) {
        map<int, int> freq;
        for(int j = i; j < n; j++) {
            freq[arr[j]]++;


            bool isMostCommon = true;
            for(auto &pair : freq) {
                if(pair.first != k && pair.second >= freq[k]) {
                    isMostCommon = false;
                    break;
                }
            }

            if(freq[k] > 0 && isMostCommon) {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
