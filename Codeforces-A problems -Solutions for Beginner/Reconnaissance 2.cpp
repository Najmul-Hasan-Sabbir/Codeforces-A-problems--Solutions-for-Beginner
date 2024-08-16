
/*   problem link:   https://codeforces.com/problemset/problem/34/A  */


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1]; // Array with 1-based indexing

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int min_diff = abs(a[1] - a[n]); // Initializing with the circular comparison
    int index1 = n, index2 = 1; // Initial pair (last and first soldier)

    // Iterate through the array and compare adjacent soldiers
    for (int i = 1; i < n; i++) {
        int diff = abs(a[i] - a[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            index1 = i;
            index2 = i + 1;
        }
    }

    // Output the indices of the soldiers forming the reconnaissance unit
    cout << index1 << " " << index2 << endl;

    return 0;
}
