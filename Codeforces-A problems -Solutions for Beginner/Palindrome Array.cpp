/*
problem link: https://vjudge.net/problem/gym-287310g


  */


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];


    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }


    bool isPalindrome = true;
    for (int i = 0; i < N / 2; i++) {
        if (A[i] != A[N - i - 1]) {
            isPalindrome = false;
            break;
        }
    }


    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
