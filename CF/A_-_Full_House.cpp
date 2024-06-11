#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> count(13, 0);
    for (int i = 0; i < 5; i++)
    {
        int t;
        cin >> t;
        count[t - 1]++;
    }
    bool b1 = false, b2 = false;

    for (int i = 0; i < 13; i++)
    {
        if (count[i] == 3)
            b1 = true;
        else if (count[i] == 2)
            b2 = true;
    }

    if (b1 && b2)
        cout << "Yes";
    else
        cout << "No";
}