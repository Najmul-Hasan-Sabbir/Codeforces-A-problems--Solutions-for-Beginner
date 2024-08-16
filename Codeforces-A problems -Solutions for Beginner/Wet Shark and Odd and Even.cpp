
/*

https://codeforces.com/problemset/problem/621/A






*/


#include <iostream>

using namespace std;

int main()
{

    int n; cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>> a[i];

    }


    long long sum=0;
    int minimum_odd=1e9+10;
    for(int i=1; i<=n; i++)
    {
        sum+=a[i];

        if(a[i]%2!=0)
        {
            minimum_odd=min(a[i], minimum_odd);
        }
    }


    if(sum%2!=0)
    {
        sum-=minimum_odd;
    }
    cout<< sum;




    return 0;
}


