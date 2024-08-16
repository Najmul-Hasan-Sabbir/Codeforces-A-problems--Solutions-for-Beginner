
/*
problem link :

https://codeforces.com/problemset/problem/1604/A




*/



#include <iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
{
    int n; cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>> a[i];
    }
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]>i)
        {
            ans=max(ans, a[i]-i);
        }
    }
   cout<< ans<< '\n';
}
    return 0;
}
