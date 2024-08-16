
/*
Q. Dante is engaged in a fight with "The Savior". Before he can fight it with his sword,
he needs to break its shields. He has two guns, Ebony and Ivory,
each of them is able to perform any non-negative number of shots.

For every bullet that hits the shield, Ebony deals a units of damage while Ivory deals b units of damage.
In order to break the shield Dante has to deal exactly c units of damage. Find out if this is possible.

example:
input: 4 6 15

Output: No

input: 3 2 7


Output: Yes


 */


  /*
 Solution Approach:
 Here we'll check the all possible ways , also called as brute force approach.
 Like we will two for loops and check all the possible damage can happen.



 */





#include <iostream>
using namespace std;

int main() {

    int enony_damage , ivory_damage,total_damage;
    cin>> enony_damage >> ivory_damage>>total_damage;

    for(int i=0; i<=total_damage; i+=enony_damage)
    {

        for(int j=0; j<=total_damage; j+=ivory_damage)
        {
            if(i+j==total_damage)
            {
                cout<<"Yes";
                return 0;
            }
        }
    }

   cout<<"No";



    return 0;
}
