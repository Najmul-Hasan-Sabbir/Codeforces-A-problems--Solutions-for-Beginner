
/*

Link:  https://codeforces.com/problemset/problem/1899/A


time: O(tc* n Root n)

space:   O(n)
   */


 #include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (long long i = 0; i < n; i++) {
            cin >> vec[i];
        }

        vector<int> divisors;


        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i * i != n) {
                    divisors.push_back(n / i);
                }
            }
        }

        long long ans = 0;

        for (auto segSize : divisors) {
            long long mx = 0;
            long long mn = LLONG_MAX;

            long long gain = 0;
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                gain += vec[i];
                cnt++;
                if (cnt == segSize) {
                    mx = max(mx, gain);
                    mn = min(mn, gain);
                    cnt = 0;
                    gain = 0;
                }
            }


            if (cnt > 0) {
                mx = max(mx, gain);
                mn = min(mn, gain);
            }

            if (mn != LLONG_MAX) {
                ans = max(ans, mx - mn);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
