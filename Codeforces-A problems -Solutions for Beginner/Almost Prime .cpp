/* A number is called almost prime if it has exactly two distinct prime divisors.
For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not.
Find the amount of almost prime numbers which are between 1 and n, inclusive.

sample--->

input: 10

Output: 2


input: 21


Output: 8

 */



/*
Solution Approach:

1st we have to brake down this problem into 3 sub problems as:

1. We need to check if a num is prime or not ?
2. we need to check if a num is almost prime or not ?
3. Lastly we'll have to check how many nums are almost prime in between 1 to N.

and that's why we'll make 2 functions for finding prime and almost prime then give 1 to N input from the main function.

 */

#include<iostream>
using namespace std;


bool is_prime(int n )
{

    int divisor=0;


    for(int i=1; i<=n; i++)
    {
      if(n%i==0)
      {
          divisor++;

      }
    }

    if(divisor==2)
    {
        return true;

    }

    else {
       return false;
    }


}



bool is_almost_prime(int n )
{

    int prime_divisors=0;
    for(int i=1; i<=n; i++)
    {

        if(n%i==0)
        {

            if(is_prime(i))
            {
                prime_divisors++;
            }
        }

    }

    if(prime_divisors==2)
    {
        return true;

    }
    else{

        return false;
    }
}


int main()
{
    int n;
    cin>> n;
    int ans=0;

   for(int i=1; i<=n; i++)
   {
       if(is_almost_prime(i))
       {
           ans++;
       }
   }
cout<< ans<<'\n';
    return 0;
}
