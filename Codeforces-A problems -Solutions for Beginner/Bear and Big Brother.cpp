
/*
problem link: https://codeforces.com/problemset/problem/791/A



   */




#include <iostream>
using namespace std;

int main() {
    int Limak, Bob;
    cin >> Limak >> Bob;
    int ans = 0;
    while (Limak <= Bob) {
        Limak *= 3;
        Bob *= 2;
        ans++;
    }
    cout << ans << '\n';
    return 0;
}



x i a o d a o



s e v e n k p l u s

