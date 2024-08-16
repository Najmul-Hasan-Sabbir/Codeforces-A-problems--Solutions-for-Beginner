
/*
problem : Given a squire matrix , calculate the absolute difference between the sum of its diagonals.


input: 3

11 2 4
4 5 6
10 8 -12

Output:
primary_diagonal_sum=4
secondary_diagonal_sum=19
the difference=15


 */



#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[n+1] [n+1];

    for(int i=1; i<=n; i++ )
    {
        for(int j=1; j<=n; j++)
        {

            cin>>a[i][j];

        }
    }

    int primary_sum=0;
    for(int i=1; i<=n; i++)
    {
        primary_sum+=a[i][i];

    }
    cout<< primary_sum<<'\n';

    int secondary_sum=0;
    for(int i=1; i<=n; i++)
    {
        secondary_sum+=a[i][n-i+1];
    }
    cout<< secondary_sum<< '\n';

    cout<< abs( primary_sum-secondary_sum) << '\n';


    return 0;

}
