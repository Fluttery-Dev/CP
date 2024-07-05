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


// int minimumDifference(vector<int>& nums) {
//         int n = nums.size(), res = 0, sum = 0;
//         sum = accumulate(nums.begin(), nums.end(),0);
        
//         int N = n/2;
//         vector<vector<int>> left(N+1), right(N+1);
        
// 		//storing all possible sum in left and right part
//         for(int mask = 0; mask<(1<<N); ++mask){
//             int sz = 0, l = 0, r = 0;
//             for(int i=0; i<N; ++i){
//                 if(mask&(1<<i)){
//                     sz++;
//                     l += nums[i];
//                     r += nums[i+N];
//                 }
//             }
//             left[sz].push_back(l);
//             right[sz].push_back(r);
//         }

//         for(int sz=0; sz<=N; ++sz){
//             sort(right[sz].begin(), right[sz].end());
//         }

//         res = min(abs(sum-2*left[N][0]), abs(sum-2*right[N][0]));

// 		//iterating over left part
//         for(int sz=1; sz<N; ++sz){
//             for(auto &a : left[sz]){
//                 int b = (sum - 2*a)/2, rsz = N-sz;
//                 auto &v = right[rsz];
//                 auto itr = lower_bound(v.begin(), v.end(),b); //binary search over right part
                
//                 if(itr!=v.end()) res = min(res, abs(sum-2*(a+(*itr))));
//                 if(itr!= v.begin()){
//                     auto it = itr; --it;
//                     res = min(res, abs(sum-2*(a+(*it))));
//                 }                
//             }
//         }
//         return res;
        
//     }

void solve(){
    int n;
    cin>>n;
    vi arr(n), brr(n);

    forn(i,n) cin>>arr[i];
    forn(i,n) cin>>brr[i];

    int c = 0,  s1=0, s2=0;

    forn(i,n){
        if(arr[i] == brr[i]){
            c+= arr[i]; continue;
        }
        if(arr[i] > brr[i]){
            s1+=arr[i];
        }else s2 += brr[i];
    }

    int mx = max(s1,s2);
    int mi = min(s1,s2);
    cout<<mx sp mi sp c<<endl;
    int d = mx-mi;
    if(c==0){
        cout<<mi<<endl; return;
    }
    if(c>0){
        c-=d;
        if(c<0) c= (c-1)/2;
        else c = (c)/2;
        cout<<mx+ c<<endl;
    }else{
        c+=d;
        if(c<0) c= (c-1)/2;
        else c = (c)/2;
        cout<<mi+ c<<endl;
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