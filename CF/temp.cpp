#include<bits/stdc++.h>

using namespace std;

bool check(vector<int> left, vector<int> right, vector<vector<int>> adj){
    stack<int> st;

    for(int i = 0; i<n; i++){
        if(left[i] == -1) st.push(2*i+1);
        if(right[i] == -1) st.push(2*i+2);
    }

    while(st.size()){
        int node = st.top();
        st.pop();
        
        for(int j : adj[node]){
            if(left[j]!= -1) return false;
            else st.push(2*node+1);
            if(right[j] != -1) return false;
            else st.push(2*node+2);
        }
    }
    return true;
}
