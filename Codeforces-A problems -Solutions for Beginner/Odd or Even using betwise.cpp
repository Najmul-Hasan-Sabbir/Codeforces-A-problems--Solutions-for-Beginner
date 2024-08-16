

/*Question: A number will be given by the user and you will have to find if the number is odd or even
 , you cant use the n%2 method.   */




 /*
 Solution Approach:

 Here we will the bitwise operation
 1. we will just perform AND operation with the num , and if the result is 1----> ODD
  if result is 0-----> Even num.


 */
#include <iostream>
using namespace std;
int main()
{

    int num , kth_bit , result;

    cin>> num;

    result=num&1;
    if(result==0)
    {
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }


    cout<<result;

    return 0;
}
