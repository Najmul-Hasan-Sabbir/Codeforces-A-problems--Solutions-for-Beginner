

/*   Problem link:  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I   */


#include <bits/stdc++.h>

using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch) {
    char lowerCh = tolower(ch); // Convert character to lowercase
    return lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u';
}

// Recursive function to count vowels in a string
int countVowels(const string& s, int index = 0) {
    // Base case: If the index is out of the string's length, return 0
    if (index >= s.length()) {
        return 0;
    }

    // Count the vowel at the current index and recursively call for the rest of the string
    return (isVowel(s[index]) ? 1 : 0) + countVowels(s, index + 1);
}

int main() {
    string s;
    getline(cin, s); // Read the input string

    // Call the recursive function and print the result
    cout << countVowels(s) << endl;

    return 0;
}
