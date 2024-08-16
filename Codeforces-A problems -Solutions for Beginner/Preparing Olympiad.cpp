/*   Question:  Preparing Olympiad



       */




#include <iostream>
using namespace std;

int main() {
    int n, l, r, x;
    cin >> n; // Input the size of the array
    cin >> l;
    cin >> r;
    cin >> x;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    for(int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        int min_val = INT_MAX;
        int max_val = INT_MIN;
        int count = 0;

        for(int i = 0; i < n; i++) {
            if((mask >> i) & 1) {
                sum += a[i];
                min_val = min(min_val, a[i]);
                max_val = max(max_val, a[i]);
                count++;
            }
        }

        if(sum >= l && sum <= r && (max_val - min_val) >= x && count >= 2) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
