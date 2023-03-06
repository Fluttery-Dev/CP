#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define ones __builtin_popcount
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{

    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    cin >> arr[0].first;
    arr[0].second = 1;
    bool is1 = false;
    if (n == 1)
    {

        cout << 0 << endl;
        return;
    }
    bool equal = true;
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
        equal &= (arr[i].first == arr[i - 1].first);
        if (arr[i].first == 1)
            is1 = true;
    }

    if (equal)
    {
        cout << 0 << endl;
        return;
    }
    if (is1)
    {
        cout << -1 << endl;
        return;
    }

    vector<pair<int, int>> op;
    sort(all(arr));
    int count = 0;
    int j = n - 1;
    int i = n - 2;

    while (i >= 0)
    {
        if (arr[i].first == arr[j].first)
        {
            i--;
            continue;
        }
        while (arr[j].first > 2)
        {
            arr[j].first = ceil((double)arr[j].first / arr[i].first);
            count++;
            op.push_back({arr[i].second, arr[j].second});
        }
        j--;
    }

    while (j >= 0)
    {
        while (arr[j].first >= 2)
        {
            arr[j].first = ceil((double)arr[j].first / arr[0].first);
            count++;
            op.push_back({arr[0].second, arr[j].second});
        }
        j--;
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << op[i].first << " " << op[i].second << endl;
    }
}

signed main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
        // cout << endl;
    }
}