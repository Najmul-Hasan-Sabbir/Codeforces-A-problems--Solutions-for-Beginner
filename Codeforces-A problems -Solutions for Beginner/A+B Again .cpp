



/*

problem link: https://codeforces.com/problemset/problem/1999/A


time: O(n)
space: O (1)



  */



  #include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int sum;
    int b;
    while(t--){


        int n;
        cin>> n;
        int a=0;

            a=n%10;

            n=n/10;

            b=n%10;
            sum=a+b;


        cout<<sum<< endl;

    }

    return 0;
}



