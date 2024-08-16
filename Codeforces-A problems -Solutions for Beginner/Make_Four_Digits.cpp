/*
Q. You are given an integer N between 0 and 9999 (inclusive).
Print it as a four-digit string after appending to it the necessary number of leading zeros.

example:
input: 321
Output: 0321
 */




 /*
 Solution Approach:
 1st we'll put if condition to check if the num is   (n<10)  if the number is less then 10
 it means its an 1 digit number, now we'll have to add 3 zero's before it.
 likewise we'll do for others like (n<100) etc..



 */
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n>0 && n<=9)
   {
       cout<< "000"<<n<< '\n';


   }
 if(n>=10 && n<=99)
{
     cout<< "00"<<n<< '\n';

}

 if(n>=100 && n<=999)
{
     cout<< "0"<<n<< '\n';

}
 if( n>=1000 && n<=9999)
{
     cout<<n<< '\n';

}


    return 0;
}
