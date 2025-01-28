
/*

Link: https://codeforces.com/problemset/problem/472/A


Time: O(n)
space: O(1)


   */

   #include<bits/stdc++.h>
   using namespace std;

   int32_t main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin>>n;

   unordered_map<string ,int > goal_cnt;
   string teams;
   string winner_team;
   int max_goal=0;
   for(int i=0; i<n; i++){

    cin>>teams;
    goal_cnt[teams]++;


   }



   for(auto entry :goal_cnt ){

    if(entry.second>max_goal){

        max_goal=entry.second;
        winner_team=entry.first;
    }



   }
   cout<<winner_team<< '\n';


   return 0;
   }
