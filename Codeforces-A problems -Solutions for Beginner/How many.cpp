
/*
Problem Statement:

How many triples of non-negative integers (a,b,c) satisfy  a+b+c≤S and  a×b×c≤T ?

Example:
Input:1 0


Output:4

*/


/*

Solving approach:




*/


#include <iostream>

using namespace std;

int main() {
    int  S,T;
    cin>> S>>T;

    int ans=0;

    for( int a=0; a<=S; a++  )
    {
        for(int b=0; b<=S; b++)
        {
            for(int c=0; c<=S; c++)
            {
               // cout<<a<< " "<< b << " " << c<< '\n';

              if(a+b+c<=S && a*b*c<=T)
              {
                  //cout<<a<< " "<< b << " " << c<< '\n';
                  ans++;
              }
            }
        }
    }
                cout<< ans<<'\n';
    return 0;
}
