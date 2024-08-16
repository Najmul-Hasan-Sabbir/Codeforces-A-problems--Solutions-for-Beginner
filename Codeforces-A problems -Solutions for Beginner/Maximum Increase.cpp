



/*   problem link:  https://codeforces.com/problemset/problem/702/A

Time : O()
Space: O ()

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_length = 1;
    int current_length = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            current_length++;
            max_length = max(max_length, current_length);
        } else {
            current_length = 1;
        }
    }

    cout << max_length << endl;

    return 0;
}
