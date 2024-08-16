
/*
Problem statement:
Find the value of 2^20 , but you cant multiply or use any loops to solve this problem.
Try any other primitive method to solve this.


  */


  /*
  solution approach:

  To solve this problem we'll use the left shift method , as we know 1 bit left shifting means 2^2.
  so if we do 20 left shifting of 1 it will give us the 2^20 .




  */



#include<iostream>
using namespace std;



int main()
{

   int p= 1 << 20;




   cout << p << '\n';




    return 0;
}


