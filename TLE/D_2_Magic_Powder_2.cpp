#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void solve(){

    int n,k;
    cin>>n>>k;
    int arr[n],brr[n];
    

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>brr[i];
    }

    int start = 0, end = *max_element(brr,brr+n)+k+100;
    int ans = 0;
    bool solved = false;

    while (start<=end)
    {
        int mid = (end-start)/2 + start;
        bool over = false;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=max(0ll,arr[i]*mid-brr[i]);
            if(sum > k){
                end = mid-1;
                over = true;
                break;
            }
        }
        
        if(over)continue;

        if(sum<= k){
            ans = mid;
            start = mid+1;
        }
        else end=mid-1;
    }

    cout<<ans;
    
}
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
solve();
}