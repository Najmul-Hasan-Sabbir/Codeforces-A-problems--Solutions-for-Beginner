


/*
problem:    https://codeforces.com/problemset/problem/236/A



*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int l=s.length();
    int ans=0;
    for(int i=1; i<l; i++)
    {
        if(s[i]!=s[i-1])
            ans++;
    }
//    cout<<s<<endl;
//    cout<<ans<<endl;
    if(ans&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}













/*

-------> wrong ans


#include <iostream>
#include<string.h>
using namespace std;



int main()
{


char a[100+1];
cin>>a;
int n=strlen(a);

int ans=0;
int b;
for(int i=0; i<=n; i++){

    for(int j=0; j<=n; j++)
    {
        if(a[i]!=a[j]){

            ans++;
        }
    }
  b=ans+1;
}
cout<<b;
if(b%2==0)
{
    cout<< "CHAT WITH HER!"<<endl;
}
else{
    cout<< "IGNORE HIM!"<<endl;

}


return 0;
}







   */



