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


void multiply(vector<vector<long long> >& A,
              vector<vector<long long> >& B)
{
    
    vector<vector<long long> > C(2, vector<long long>(2));

    
    C[0][0] = (A[0][0] * B[0][0] + A[0][1] * B[1][0]) % MOD;
    C[0][1] = (A[0][0] * B[0][1] + A[0][1] * B[1][1]) % MOD;
    C[1][0] = (A[1][0] * B[0][0] + A[1][1] * B[1][0]) % MOD;
    C[1][1] = (A[1][0] * B[0][1] + A[1][1] * B[1][1]) % MOD;

  	
    A[0][0] = C[0][0];
    A[0][1] = C[0][1];
    A[1][0] = C[1][0];
    A[1][1] = C[1][1];
}


vector<vector<long long> >
power(vector<vector<long long> > M, int expo)
{
    
    vector<vector<long long> > ans = { { 1, 0 }, { 0, 1 } };

    
    while (expo) {
        if (expo & 1)
            multiply(ans, M);
        multiply(M, M);
        expo >>= 1;
    }

    return ans;
}


void solve(){
    int n;
    cin>>n;
    if(n==0 || n==1){
        cout<<n;return;
    }
    vector<vector<long long> > M = { { 1, 1 }, { 1, 0 } };
    auto vec = power(M, n-1);
    cout<< vec[0][0];
}

signed main()
{
   fast()

    int t=1;
    

    while (t--)
    {
        solve();
    }

    return 0;
}