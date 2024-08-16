


 /*   problem link:   https://codeforces.com/problemset/problem/669/A  */


 #include<bits/stdc++.h>
using namespace std;
int main()
{
	long long stons,gift;
	cin>>stons;

		gift=0;
		gift=2*(stons/3);
		if(stons%3>0)
			gift++;
		cout<<gift<<endl;

	return 0;
}
