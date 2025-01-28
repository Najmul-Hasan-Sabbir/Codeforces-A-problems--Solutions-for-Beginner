
/*

Link: https://codeforces.com/problemset/problem/1742/B




   */
   #include<bits/stdc++.h>
   using namespace std;

   int main(){

   int tc; cin>>tc;
   while(tc--){
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++){

        cin>>vec[i];


    }
    sort(vec.begin(), vec.end());


if(vec[0]==vec[1]) {

    cout<< "NO"<< '\n';
}
else{
    cout<<"YES"<< '\n';
}




   }

   return 0;
   }
