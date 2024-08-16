/*
Q. A biscuit making machine produces B biscuits at the following moments: A seconds, 2A seconds, 3A seconds
and each subsequent multiple of A seconds after activation.
Find the total number of biscuits produced within T +0.5 sec after activation.

example:
input: 3 2 9
Output: 6
 */




 /*
 Solution Approach:

 here we will use a for(int i=a; i<=T; i+=a)  and inside it we'll set the as if this for loop
  runs 4 times B will be added for times. so we'll get our value.

 */


#include <iostream>
using namespace std;

int main() {

    int a , b,T;
    cin>> a >> b>>T;

   int  ans=0;


    for(int i=a; i<=T; i+=a)
    {

        ans+=b;

    }
    cout << ans;
    return 0;
}



