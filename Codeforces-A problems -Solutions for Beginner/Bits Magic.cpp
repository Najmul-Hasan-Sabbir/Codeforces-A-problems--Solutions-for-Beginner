
/*
Problem Link:
https://www.codechef.com/problems/BITMAGIC


*/



#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t; cin>>t;
     while(t--){


        unsigned n; cin>>n;
        unsigned k; cin>>k;

        if((n>>k) & 1 ) {


        }
        else{

            n=n|(1<<k);

        }

cout<< n<< '\n';
     }





    return 0;
}
