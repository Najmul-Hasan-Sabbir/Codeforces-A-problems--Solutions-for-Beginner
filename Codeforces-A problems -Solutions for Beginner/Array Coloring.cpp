/*

Link: https://codeforces.com/problemset/problem/1857/A



   */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x%2!=0)cnt++;
        }
        if(cnt%2==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
