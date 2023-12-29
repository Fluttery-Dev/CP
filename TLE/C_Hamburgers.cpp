#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void solve(){
    int b=0,s=0,c=0;
    string str;
    cin>>str;
    int nb,ns,nc;
    int pb,ps,pc;
    cin>>nb>>ns>>nc;    
    int money;
    cin>>money;
    
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]=='B')
            b++;
        else if(str[i]=='S')        
            s++;
        else
            c++;
    }
    int start = money/(pb*b + pc*c + ps*s);
  
    int end = 1e14;
    
    int ans = 0;
    while(start<=end){
        int mid = (end-start)/2 + start;
        int cost = 0;
        cost += max(0ll,mid*b - nb)*pb;
        cost += max(0ll,mid*s - ns)*ps;
        cost += max(0ll,mid*c - nc)*pc;
        

        if(cost<=money){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }

    }

    cout<<ans;  
     
}
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);

solve();
}   