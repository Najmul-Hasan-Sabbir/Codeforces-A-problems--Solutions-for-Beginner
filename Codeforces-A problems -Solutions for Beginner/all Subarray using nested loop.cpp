
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "enter the size of the array"<<'\n';

    cin>> n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cout<< "enter the "<<i <<"element"<<'\n';
        cin>>a[i];

    }

    for(int i=0; i<n; i++)
    {

        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<a[k];
            }
            cout<< " "<<'\n';
        }
    }



    return 0;
}
