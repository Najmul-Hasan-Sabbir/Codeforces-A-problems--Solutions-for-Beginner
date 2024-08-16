
/*
problem link: https://vjudge.net/problem/gym-293843e


  */


#include <iostream>

using namespace std;

int main()
{
    long long n; cin>> n;
    long long sum=0;
    while(n>0)
        {

        sum+=n%10;
        n=n/10;


         }

    cout<< sum;

}
