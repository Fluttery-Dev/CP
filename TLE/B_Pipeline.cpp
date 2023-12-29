#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int sum(int n) {return n*(n+1)/2;}

void solve(){
    int n,k;
    cin>>n>>k;
    n-=1;
    int s = sum(k-1);
   
    if(s < n){
        cout<<-1;
        return;
    }

    int start = 0;
    int end = k-1;
    int mid;
    while (start<=end)
    {
        mid = (end-start)/2 +start;
        if(s - sum(mid) >= n){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<k-end-1;

    
}
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
solve();
}