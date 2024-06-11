#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int calc(vector<int> a, int n){
    int count =0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        int first,second,avg;

        if(i+1 == n){
            second = 0;
        }
        else
            second = a[i+1];
        if(i-1 == 0){
            first = 0;
        }
        else 
            first = a[i-1];

        avg = (first+ second)/2;

        if(avg==a[i]) count++;
        
    }
    return count;
    
}
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
int tc; cin >> tc;
while (tc--) {
calc();
cout<<endl;
}
}