
// "To live is to suffer, to survive is to find some meaning in the suffering."
#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ll long long int
#define pb push_back
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())
#define mod 1000000007
const int N = 1e5;

vector<int> g[N];
int vis[N];
int level[N];

   void dfs(int source){
      queue<ll> q;
      q.push(source);
      vis[source] = 1;

      while(!q.empty()){

         ll cur_v = q.front();
         cout << cur_v << ' ' ;
         q.pop(); 
 
         for(auto child:g[cur_v]){
           if(vis[child]==0) {
            q.push(child);
            level[child] = level[cur_v]+1;
            vis[child] = 1;
            }
         }
        

      }



   }


int main() {
    boost;

   int edges;
   cin >> edges;
   while(edges--){
      int a,b;
      cin >> a >> b;
      g[a].pb(b);
      g[b].pb(a);

   }

   dfs(1);




      
     
}



