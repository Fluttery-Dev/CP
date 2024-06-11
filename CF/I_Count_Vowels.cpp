#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int ans(string str)
{

    if (str.size() == 0)
        return 0;

    int count = ans(str.substr(1, str.size() - 1));

    if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u')
        count++;

    return count;
}

void solve()
{
    string str;
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << ans(str);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}