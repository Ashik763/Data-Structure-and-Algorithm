
// "To live is to suffer, to survive is to find some meaning in the suffering."
// Diameter of a tree

#include<bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ll long long int
#define pb push_back
#define fuck_off return 0
#define endl "\n"
#define  boost   ios::sync_with_stdio(false);cin.tie(nullptr) ; 
#define rv reverse(v.begin(),v.end())
#define mod 1000000007
const int N =  1e5;

int d[N];

vector<int> g[N];



 void dfs(int vertex,int parent){



   for(auto &child:g[vertex]){
      if(child!=parent) {
         d[child] = d[vertex]+1;
       
         dfs(child,vertex);

      }
   }



 }

int main() {
    boost;
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
      int x,y;
      cin >> x >> y;
      g[x].push_back(y);
      g[y].push_back(x);


    }
    // find the node which is in maximum distance from node 1 
    dfs(1,0);
    int maxi = 0;
     int node = 1;
    for(int i=1;i<=n;i++){
        if(maxi < d[i]){
            maxi = d[i];
            node = i;

         }
         d[i] = 0;


    }
    // memset(d,0,sizeof(d));
    maxi = 0;

    // finding the node which is in maximum distance from node 
    dfs(node,0);
        for(int i=1;i<=n;i++){
        if(maxi < d[i]){
            maxi = d[i];
            node = i;

         }
         d[i] = 0;


    }

    cout << maxi << endl;

    
}
