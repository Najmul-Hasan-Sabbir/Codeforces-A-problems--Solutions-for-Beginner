/*
Problem Link:
https://codeforces.com/problemset/problem/734/A


*/



#include <iostream>

using namespace std;

int main()
{

    int n; cin>> n;

    char s[n+1];
    cin>> s;

    int anton=0;
    int Danik=0;
    for(int i=0; i<n; i++)
    {


        if(s[i]=='A'){
            anton++;
        }

        else if (s[i]=='D')
        {
            Danik++;
        }
    }
    if(anton> Danik){
        cout<< "Anton" << '\n';
    }
    else if(anton<Danik){

        cout<<"Danik"<< '\n';
    }
        else {
            cout<< "Friendship"<< '\n';
        }


    return 0;
}
