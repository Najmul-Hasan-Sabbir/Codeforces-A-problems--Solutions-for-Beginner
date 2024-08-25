
/* problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H



      */


#include<bits/stdc++.h>
using namespace std;


void print(int n, char C){

for(int i=0; i<n; i++){


    cout<< C;

    if(i < n - 1) cout<< " ";
}
cout<<endl;

}






int main() {

    int t; cin>>t;
    while(t--){

        int n;cin>>n;
        char C; cin>>C;
        print(n,C);


    }



    return 0;
}
