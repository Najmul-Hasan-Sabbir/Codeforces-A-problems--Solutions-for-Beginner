

/*   problem link:   https://codeforces.com/problemset/problem/707/A  */


#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool isColored = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char pixel;
            cin >> pixel;

            if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
                isColored = true;
            }
        }
    }


    if (isColored) {
        cout << "#Color" << endl;
    } else {
        cout << "#Black&White" << endl;
    }

    return 0;
}
