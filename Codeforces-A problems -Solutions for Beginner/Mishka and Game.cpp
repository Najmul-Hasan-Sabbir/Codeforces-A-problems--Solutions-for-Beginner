


/*   problem link:   https://codeforces.com/problemset/problem/703/A

Time : O(t)
Space: O (1)

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
int t; cin>>t;
int Mishka=0;
int Chris=0;
   while(t--){
    int M,C ; cin>> M>>C;


    if( M>C){
        Mishka++;
    }
    else if(M<C){
        Chris++;
         }

   }

   if(Mishka>Chris)
   {
       cout<< "Mishka"<<endl;
   }
   else if(Mishka<Chris){
    cout<< "Chris"<<endl;
   }
   else{
    cout<< "Friendship is magic!^^"<<endl;
   }


 return 0;
}




