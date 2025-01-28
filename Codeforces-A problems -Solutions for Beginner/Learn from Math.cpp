
/*

Link: https://codeforces.com/problemset/problem/472/A



   */

#include <bits/stdc++.h>
using namespace std;


bool isComposite(int val){
if(val<=3) return false;

for(int i=2; i*i<=val; i++){


    if(val %i==0){

       return true;

    }

}
return false;

}



int main(){


int n; cin>>n;
int y,x;
for(int x=4; x<n; x++){



    y=n-x;


    if(isComposite(x)&& isComposite(y)){


        cout<<x << " "<<y<< '\n';
        break;
    }

}


    return 0;
}
