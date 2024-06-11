#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cin>>n;
    // vector<vector<int>> adj(n+1);
    vector<int> deg(n+1,0);

    for(int i=1; i<n; i++){
        int u,v;
        cin>>u>>v;
        // adj[u].push_back(v);
        // adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }

    int mx = *max_element(deg.begin()+1, deg.end());

    vector<int> ans;

    for(int i =1; i<=n; i++){
        // cout<<deg[i]<<" ";
        if(deg[i] == mx){
            ans.push_back(i);
      
        }
    }

    cout<<ans.size()<<endl;

    for(int x: ans) cout<<x<<endl;
}

