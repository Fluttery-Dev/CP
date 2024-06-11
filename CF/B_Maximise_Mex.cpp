#include<bits/stdc++.h>

using namespace std;

void helper(){

    int n,k;
    cin>>n>>k;
    vector<bool> arr(n);
    int c = 0;
    int t;
    for(int i =0; i<n; i++){
        cin>>t;
        if(t<n && t>=0){
            arr[t] = true;
            c++;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]) continue;

        if(!k){
            cout<<i<<endl;
            return ;
        }
        arr[i] = true;
        k--;
        
        
    }
    cout<<n<<endl;
    return ;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        helper();
    }
}