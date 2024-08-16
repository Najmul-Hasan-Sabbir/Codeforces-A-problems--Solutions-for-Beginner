

/*

Forgotten Episode:

problem link: https://vjudge.net/problem/codeforces-440a




*/




#include <iostream>

using namespace std;

int main()
{
int n; cin>>n;
int a[n+1];

for(int i=1; i<=n-1; i++ )
{

    cin>>a[i];


}

bool does_exist[n+1];

for(int i=1; i<=n; i++)
{

    does_exist[i]=false;

}


for(int i=1; i<=n-1; i++)
{

    does_exist[a[i]]=true;
}

for(int i=1; i<=n; i++)
{


    if(does_exist[i]==false)
    {

        cout<< i<< '\n';
    }
}


    return 0;
}

//time : O(n)
//space: O(n)

/*


Brute force approach: this will get TLE


#include <iostream>

using namespace std;

int main() {



   int n; cin>>n;
   int a[n+1];

   for(int i=1; i<=(n-1); i++ )
   {
       cin>> a[i];

   }

   for(int x=1; x<=n; x++) {

    bool doesExist=false;

    for(int i=1; i<=n-1; i++)
    {
        if(a[i]==x)
        {
            doesExist=true;
        }


    }



    if(!doesExist){

        cout<< x << '\n';
    }
   }


    return 0;
}

//Time: O(n^2)
// Space: O(n)










*/







