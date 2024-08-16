
/*
problem link: https://codeforces.com/problemset/problem/41/A


failing in 41th test case:
input:
code
edocz

Output
YES
Answer
NO

  */


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

  /*

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char A[101], B[101];
    cin >> A >> B;
    int n = strlen(A);
    bool isReversed = true;
    for (int i = 0; i < n; i++) {
        if (A[i] != B[n - i - 1]) {
            isReversed = false;
            break;
        }
    }

    if (isReversed) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}


*/
