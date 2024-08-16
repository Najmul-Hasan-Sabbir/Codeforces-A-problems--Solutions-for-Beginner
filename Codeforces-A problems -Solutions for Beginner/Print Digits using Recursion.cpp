
 /*   problem link:  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D  */


 #include<bits/stdc++.h>
using namespace std;


 void separate(int n ){


 if(n==0){
    return;
 }

 int R=n%10;
 n=n/10;

 separate(n);
  cout<< R<< " ";


 }


int main() {

    int t; cin>>t;

    while(t--)

    {
        int N;
    cin >> N; // Read the input value for N
    separate(N); // Call the recursive function
       cout<< endl;
    }

    return 0;
}
