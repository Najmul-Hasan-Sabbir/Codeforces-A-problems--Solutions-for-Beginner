
/*


Link: https://codeforces.com/contest/2063/problem/A


time:
space:

                              */


#include<bits/stdc++.h>
using namespace std;

int main(){

int tc; cin>>tc;

while(tc--){

    int l ,r; cin>>l>>r;

    if(l==1 & r==1){
        cout<< "1"<< '\n';

    }
    else{

        cout<<r-l<< '\n';

    }

}

return 0;
}
