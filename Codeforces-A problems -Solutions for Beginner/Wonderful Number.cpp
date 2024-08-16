#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    int N;
    cin >> N;

    // Step 1: Check if N is odd
    if (N % 2 == 0) {
        cout << "NO" << endl;
        return 0;
    }

    // Step 2: Convert the number to binary
    string binaryRepresentation = "";
    int num = N;

    while (num > 0) {
        binaryRepresentation = to_string(num % 2) + binaryRepresentation;
        num /= 2;
    }

    // Step 3: Check if binaryRepresentation is a palindrome
    string reversedBinary = binaryRepresentation; // Copy the binary string
    reverse(reversedBinary.begin(), reversedBinary.end()); // Reverse the copied string

    if (binaryRepresentation == reversedBinary) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
