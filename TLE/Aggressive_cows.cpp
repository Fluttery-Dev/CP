#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isPossible(int n, int cows, int arr[], int dist){
   
    bool possible;
    int i=1;
    cows--;
    while (i<n)
    {
        int sum = 0;
        while (sum<dist && i<n)
        {
            sum+=arr[i]-arr[i-1];
            i++;
        }
        if(sum>=dist)
        cows--;

        if(cows ==0)
            break;
        
    }

    return cows==0;
    
}

void solve(){
    int n,c;
    cin>>n>>c;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int lo = 0;
    int hi = arr[n-1]-arr[0];
    int ans = 0;

    while (lo<=hi)
    {
        int mid = (hi-lo)/2 + lo;

        if(isPossible(n,c,arr,mid)){
            ans=mid;
            lo = mid+1;
        }

        else
            hi = mid-1;
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