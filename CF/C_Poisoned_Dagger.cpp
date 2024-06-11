#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void solve(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int start = 0;
    int end = 1e18;
    int ans;

    while (start<=end)
    {
        int mid =  (end-start)/2 + start;

        int sum = mid;
       

        for (int i = 1; i < n; i++)
        {
            sum += min(arr[i]-arr[i-1],mid);
        }
        if(sum >= h){
            ans = mid;
            end = mid-1;
        }
        else start = mid+1;
    }

    cout<<ans;
    
}
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
int tc; cin >> tc;
while (tc--) {
solve();cout<<endl;
}
}