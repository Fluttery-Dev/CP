#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
vector<string> ans;

void helper(int cnt, int tot, int n, string s)
{
    if (tot < 0)
        return;
    if (s.size() == 2 * n)
    {
        ans.push_back(s);
        return;
    }

    if (cnt < n)
        helper(cnt + 1, tot + 1, n, s + '(');

    helper(cnt, tot - 1, n, s + ')');
}
void solve()
{
    int n;
    cin >> n;

    helper(0, 0, n, "");
    vector<string> temp = ans;
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}