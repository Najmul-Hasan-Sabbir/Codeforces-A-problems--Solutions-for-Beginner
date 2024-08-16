/*
problem link:

https://codeforces.com/problemset/problem/71/A


 */



#include<bits/stdc++.h>
using namespace std;
int main()
{



 int T;
    cin >> T; // Number of test cases
    while (T--) {
        string S;
        cin >> S;
        int length = S.length();

        if (length > 10) {
            cout << S[0] << length - 2 << S[length - 1] << '\n';
        } else {
            cout << S << '\n';
        }
    }

return 0;

}
