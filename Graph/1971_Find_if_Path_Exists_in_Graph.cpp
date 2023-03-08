#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool vis[1000005];
    vector<int> v[1000005];

    bool dfs(int vertex,int des){
         if(vertex == des)return true;
        vis[vertex]=true;
        bool path = false;
         
        for(auto child:v[vertex]){
            if(vis[child]==true)continue;

            if(des==child)return true;
             path |= dfs(child , des);
        }
        return path;

    }


    bool validPath(int n, vector<vector<int>>& e, int source, int des) {
      
        for(int i=0;i<e.size();i++){

            v[e[i][0]].push_back(e[i][1]);
            v[e[i][1]].push_back(e[i][0] );
        }

      

         return dfs(source,des);
       
        
    }
};