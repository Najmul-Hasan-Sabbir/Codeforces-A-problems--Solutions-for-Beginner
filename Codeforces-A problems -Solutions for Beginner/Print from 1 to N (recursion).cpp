




 /*   problem link:   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B */


 #include<bits/stdc++.h>
using namespace std;


void printRecursion(int n) {
    if (n == 0) {
        return ; // Base case: stop recursion
    }

    printRecursion(n - 1); // Recursive call
    cout<< n<<endl;
}

int main() {
    int N;
    cin >> N; // Read the input value for N
    printRecursion(N); // Call the recursive function
    return 0;
}
