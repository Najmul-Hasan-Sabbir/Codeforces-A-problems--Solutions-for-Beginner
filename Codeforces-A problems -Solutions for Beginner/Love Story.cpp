
/*
problem: https://codeforces.com/problemset/problem/1829/A


Time: O(t)
space: O(1)-----> because the array size always stays 10 , it never changes

*/


#include <iostream>
#include <cstring>
using namespace std;

int main()
{

int t; cin>>t;
while(t--)
{
    char A1[10+1];

strcpy(A1, "codeforces");


char A2[10+1];
cin>> A2;
int ans=0;
for(int i=0; i<10; i++){

    if(A1[i] !=A2[i]){

        ans++;
    }

}

cout<< ans<< '\n';
}


    return 0;
}

