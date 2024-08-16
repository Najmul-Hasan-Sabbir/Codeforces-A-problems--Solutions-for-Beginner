
#include <iostream>

using namespace std;

    int cout_set_bits(int x) {

    int count=0;
    for(int k=0; k<10; k++)
    {

        if((x>>k) &1){


            count++;
        }
    }

    return count;
    }




    int main(){
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ans=0;
    for(int i=1; i<=n; i++)
    {

        ans+=cout_set_bits(i);
    }

    cout<< ans<< '\n';
    }

    return 0;
}
