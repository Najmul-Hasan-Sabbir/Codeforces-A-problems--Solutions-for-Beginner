/* problem link:  https://codeforces.com/problemset/problem/339/A



      */

#include<bits/stdc++.h>
using namespace std;

const int N=109;
char s[N];
int digits[N];

int main() {
    cin >> s;

    int n = strlen(s);
    int digit_id = 0;

    for(int i = 0; i < n; i += 2) {
        digits[digit_id] = s[i] - '0';
        digit_id++;
    }

    sort(digits, digits + digit_id);

    for(int i = 0; i < digit_id; i++) {
        cout << digits[i];
        if(i < digit_id - 1) {
            cout << "+";
        }
    }
    cout << '\n';

    return 0;
}
