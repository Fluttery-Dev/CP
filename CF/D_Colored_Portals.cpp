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

#define si set<int>
#define pii pair<int,int>
#define mii map<int,int>
#define vii vector<pii>
#define sii set<pii>
#define vvi vector<vi>
#define vvii vector<vii>
#define vsi vector<si>
 
#define in(arr,n)     for(int mm=0;mm<n;mm++)cin >>arr[mm];
#define out(arr,n)    for(int mm=0;mm<n;mm++)cout<<arr[mm]<<" ";cout<<endl;
#define inn(arr,m,n)  for(int mm=m;mm<n;mm++)cin >>arr[mm];
#define outt(arr,m,n) for(int mm=m;mm<n;mm++)cout<<arr[mm]<<" ";cout<<endl;
 
#define narr vi arr(n);in(arr,n)
#define nbrr vi brr(n);in(brr,n)
#define fo(i,a,b)     for(int i=a;i<b;i++)
#define rfo(i,a,b)    for(int i=a;i>b;i--)

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

bool hasCommonCharacter(const string& s, const string& t) {
    return (s[0] == t[0] || s[0] == t[1] || s[1] == t[0] || s[1] == t[1]);
}

map<string,int> color = {
    {"BG", 0},
    {"BR",1},
    {"BY", 2},
    {"GR", 3},
    {"GY", 4},
    {"RY", 5},
};

void solve(){
    int n,q;
    cin>>n>>q;
    vector<string> arr(n);
    forn(i,n) {cin>>arr[i]; sort(all(arr[i]));}

    vector<vector<int>> prev(n, vi(6,-1)), nxt(n,vi(6,n));

    forn(i,n){
        if(i>0)
        prev[i] = prev[i-1];
        prev[i][color[arr[i]]] = i;
    }
    for(int i=n-1; i>=0; i--){
        if(i<n-1)
        nxt[i] = nxt[i+1];
        nxt[i][color[arr[i]]] = i;
    }
    // printv(prev);
    // printv(nxt);

    int a,b;
    while(q--){
        cin>>a>>b;
        a--;
        b--;
        if(a>b) swap(a,b);
        string x = arr[a], y = arr[b];
        if(hasCommonCharacter(x,y)){
            cout<<abs(a-b)<<endl; continue;
        }
        int ans = INT_MAX;
        // cout<< a sp b sp x sp y<<endl;
        forn(i,6){
            if(color[x] != i && color[y] != i){
                if(prev[a][i] != -1)
                ans = min(ans, abs(prev[a][i] - a)+ abs(prev[a][i]-b));
                if(nxt[a][i] != n)
                ans = min(ans, abs(nxt[a][i] - a)+ abs(nxt[a][i]-b));
                // cout<<ans<<endl;
            }
        }
        if(ans == INT_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}

signed main()
{
   fast()

    int t=1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}