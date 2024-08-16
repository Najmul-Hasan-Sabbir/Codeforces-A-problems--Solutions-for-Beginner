






 /*   problem link:   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E  */


 #include<bits/stdc++.h>
using namespace std;


 void conversion(int n ){


 if(n==0){
    return;
 }

 int Reminders=n%2;
 n=n/2;

 conversion(n);
  cout<< Reminders;


 }


int main() {

    int t; cin>>t;

    while(t--)

    {
        int N;
    cin >> N; // Read the input value for N
    conversion(N); // Call the recursive function
       cout<< endl;
    }

    return 0;
}
