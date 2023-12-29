#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void solve(){
    int l,r;
    cin>>l>>r;

    vector<int> primes;

    int t = sqrt(r);
    vector<int> p(t+1,true);

    for (int i = 2; i < t+1; i++)
    {
        if(p[i]){
            for (int j = i; j < t+1; j+=i)
            {
                
                p[j] = false;
            }
            primes.push_back(i);
        }
    }
    


    int n = r-l+1;

    vector<int> arr(n,true);

    for(int i : primes){
        for (int j = i*i; j <= r; j+=i)
        {
            if(j >= l)
                arr[j-l] = false;
        }     
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] && i+l!=1){
            cout<<i+l<<"\n";
        }
    }
}

signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
int tc; cin >> tc;
while (tc--) {
solve();cout<<endl;
}
}