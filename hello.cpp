
// "To live is to suffer, to survive is to find some meaning in the suffering."
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
const int N = 1e5+10;
bool vis[N];
vector<int> g[N];

void dfs(int vertex){

	vis[vertex]= true;
	cout << vertex << endl;
	for(auto child:g[vertex]){
		cout << "par" << vertex << " , child" << child << endl;
		if( vis[child]== true)continue;
		dfs(child);
	}
	cout << "after finishing " << vertex << endl;
}




int main() {
    boost;
    int n,m;
    cin >> n >> m;
    vector<int> p[5];
    for(int i=0;i<5;i++){
    	int a;
    	cin >> a ;
    	p[i].pb({a});
    }

    for(auto v:p){
    	for(auto val:v){
    		cout << val << ' ';
    	}

    	cout << endl;
    }
    	
    // while(m--){
    // 	int a,b;
    // 	cin >> a >> b;
    // 	g[a].pb(b);
    // 	g[b].pb(a);
    // }
    // dfs(1);
    // }
    // }
     
}



