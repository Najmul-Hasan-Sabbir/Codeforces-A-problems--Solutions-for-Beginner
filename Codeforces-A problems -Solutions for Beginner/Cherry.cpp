/*
problem link :

https://codeforces.com/problemset/problem/1554/A

  */



#include <iostream>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {

            cin>> a[i];
        }
        long long ans=0;
        for(int i=1; i<n; i++)
        {

            ans=max(ans, (long long)a[i]*a[i+1]);

        }
        cout<< ans<< '\n';
    }
    return 0;

}
