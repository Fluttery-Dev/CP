#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;

    cin >> k;

    int h = 21 + (k / 60);
    int m = k % 60;
    cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m;
}