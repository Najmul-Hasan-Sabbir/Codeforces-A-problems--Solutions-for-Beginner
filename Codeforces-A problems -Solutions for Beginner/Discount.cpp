
/*
Problem Statement:

A shop sells a product whose regular price is A yen (Japanese currency) for B yen.
By what percentage of the regular price is this product discounted?



Example:
Input:100 80


Output: 20.0

Input:7 6

Output:14.285714285714285714


*/



/*

Solving approach:




*/




#include <iostream>

using namespace std;

int main() {
    double regular_price , dicounted_price;
    double total_discount;
    cin>> regular_price >>dicounted_price;
   total_discount=regular_price-dicounted_price;
   double discount_percentage=(double)total_discount/regular_price*100;
   cout<<  discount_percentage;

    return 0;
}

