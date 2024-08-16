



 /*   problem link:   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A */


 #include<bits/stdc++.h>
using namespace std;


void printRecursion(int n) {
    if (n <= 0) {
        return; // Base case: stop recursion
    }
    cout << "I love Recursion" << endl; // Print the string
    printRecursion(n - 1); // Recursive call
}

int main() {
    int N;
    cin >> N; // Read the input value for N
    printRecursion(N); // Call the recursive function
    return 0;
}
