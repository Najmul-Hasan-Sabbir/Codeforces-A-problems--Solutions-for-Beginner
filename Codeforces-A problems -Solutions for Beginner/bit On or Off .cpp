
/*
Problem statement:
Find the k'th bit of any number is on or off ??


  */




  /*
  Solution approach:

  Here we'll use the right shift technique to find k'th bit on or off . also will use the Bitwise AND with the num with 1 . .


    */



#include<iostream>
using namespace std;

int check_kth_bit(int x, int k)
{

    return (x>>k) & 1;



}


int main()
{

    int num , kth_bit;


    cout<<"Enter the number you want to use :"<<'\n';

    cin>> num;
    cout<<"Enter the k'th digit you want o check for ON or OFF  :"<<'\n';
    cin>> kth_bit;


    cout<< check_kth_bit(num, kth_bit);




    return 0;
}
