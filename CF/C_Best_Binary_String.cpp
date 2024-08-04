#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;

#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define endl '\n'
#define sp <<" "<<
#define pb push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
#define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define vi vector<int>
#define forn(i,n) for(int i=0; i<n; i++)

string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(int a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
string dectobin(int n) { string s = bitset<64> (n).to_string(); const auto loc1 = s.find('1'); if(loc1 != string::npos) return s.substr(loc1); return "0";}
int binpow(int b,int p,int mod){int ans=1;b%=mod;for(;p;p>>=1){if(p&1)ans=ans*b%mod;b=b*b%mod;}return ans;}
int inv(int a, int mod){return binpow(a,mod-2, mod);}


//---- Debugger ---- //
#define debarr(a,n) cout<<#a<<" : ";for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debmat(mat,row,col) cout<<#mat<<" :\n";for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class S, class T>ostream& operator <<(ostream& os, const pair<S, T>& p) {return os << "(" << p.first << ", " << p.second << ")";}
template <class T>ostream& operator <<(ostream& os, const vector<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const unordered_set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const unordered_map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const multiset<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ","; dbs(str.substr(idx + 1), s...);}
template <class T> void prc(T a, T b) {cerr << "["; for (T i = a; i != b; ++i) {if (i != a) cerr << ", "; cerr << *i;} cerr << "]\n";}
//----------------- //



int InvasionTime(int n, int m, vector<string> arr){
    queue<pair<int,int>> q;
    int c =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 'A'){
                q.push({i,j});
            }else if(arr[i][j] == 'E') c++;
        }
    }
    vector<int> x = {0,1,0,-1}, y = {1,0,-1,0};
    int ans = 0;
    while(true){
        int t = q.size();
        while(t--){
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for(int k =0; k<4; k++){
                int i = a+x[k];
                int j = b+y[k];
                // cout<<i sp j<<endl;
                if(i>=0 && i<n && j>=0 && j<m && arr[i][j] == 'E'){
                    q.push({i,j});
                    arr[i][j] = 'A';
                    c--;
                }
            }
        }
        if(q.empty())break;
        ans++;
    }

    if(c>0) return -1;
    
    return ans;
}





void solve(){

}

signed main()
{
   fast()
    int n,m;
    cin>>n>>m;
    vector<string> arr(n);
    forn(i,n) cin>>arr[i];
    cout<<InvasionTime(n,m, arr);

    return 0;
}