#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void fuck(){
    int n = 1e8;
    vector<bool> primes(n,true);

    vector<int> primeAtPos;

    for (int i = 2; i*i < n; i++)
    {
        if(primes[i]){
            for (int j = i*i; j < n; j+=i)
            {
                primes[j]=false;
            }
            
        }
    }

    for (int i = 2; i < n; i++)
    {
        if(primes[i])
        primeAtPos.push_back(i);
    }
    
    int q;
    cin>>q;
    int t;
    for (int i = 0; i < q; i++)
    {
        cin>>t;
        cout<<primeAtPos[t-1]<<"\n"; 
    } 
}

signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
fuck();
}