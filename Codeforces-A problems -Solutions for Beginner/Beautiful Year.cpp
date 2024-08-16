
/* It seems like the year of 2013 came only yesterday.
 Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number,
find the minimum year number which is strictly larger than the given one and has only distinct digits. */


/* Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct.
 It is guaranteed that the answer exists.

 Input:1987
 Output:2013


 */

#include<iostream>
using namespace std;

bool is_beautiful_year(int n)
{

    int  d1 = n % 10;
        n = n / 10;

      int   d2 = n % 10;
        n = n / 10;

       int  d3 = n % 10;
        n = n / 10;

       int  d4 = n % 10;


        if (d1 != d2 && d1 != d3 && d1 != d4 &&
            d2 != d3 && d2 != d4 &&
            d3 != d4) {

            return true;
        }
    else {

        return false;

    }
}


int main()
{
    int y;
    cin >> y;
y++;
  while(true)
  {

      if(is_beautiful_year(y))
      {

          cout<<y<<'\n';
          return 0;
      }
      y++;
  }

    return 0;
}
