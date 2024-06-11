#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int modPow(int a, int b){
    if(b==1 || b==0)
    return a;
    int t = modPow(a,b/2);
    if(b&1)
        return ((t*t)%MOD*a)%MOD;
    else 
        return (t*t)%MOD;
}

void solve(){

    int n;
    cin>>n;
    if(n==0){
        cout<<1;
        return;}
    int a = modPow(2,n);
    int b = modPow(4,n);
    int ans =((a+b)%MOD)*(modPow(2,MOD-2))%MOD;
    cout<<ans;

}

signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
solve();
}