#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int findTheWinner(int n, int k)
{
    int i = 0;
    vector<int> vec(n);
    iota(vec.begin(), vec.end(), 1);
    while (vec.size() != 1)
    {
        i += k;
        i %= n;
        vec.erase(vec.begin() + i);
    }
    return vec[0];
}

void solve()
{
    int n, k;
    cin >> n >> k;
    cout << findTheWinner(n, k);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}