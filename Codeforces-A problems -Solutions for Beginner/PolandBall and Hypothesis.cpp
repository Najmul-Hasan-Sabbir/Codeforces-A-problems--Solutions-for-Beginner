
/*   problem link:   https://codeforces.com/problemset/problem/755/A  */


#include<bits/stdc++.h>
using namespace std;

bool prime_check(int n){
 if (n <= 1) return false;
for(int i=2; i*i <=n; i++){

    if(n%i==0){
        return false;
    }
}

return true;
}






int main() {

   int n; cin>>n;

   for(int m=1; m<10e3; m++){

    int value=n*m+1;
    prime_check(value);
   if (!prime_check(value)) {  // If value is not a prime
            cout << m << endl;
            break;
   }



   }
    return 0;
}

