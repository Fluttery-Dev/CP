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
    int n, k;
    cin >> n >> k;
    vector<int> hot(k + 1);
    vector<int> cold(k + 1);
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < k + 1; i++)
    {
        cin >> cold[i];
    }

    for (int i = 1; i < k + 1; i++)
    {
        cin >> hot[i];
    }

    unordered_map<int, int> diff(k + 1);

    for (int i = 1; i < k + 1; i++)
    {
        diff[i] = cold[i] - hot[i];
    }

    vector<int> ct(k + 1, 0);
    for (int i = 0; i < n; i++)
    {
        ct[arr[i]]++;
    }

    vector<int> comp(2, 0);
    int ans = 0;
    for (int i = 0; i < n; i++)

    {
        ct[arr[i]]--;
        //   cout << comp[0] << " " << comp[1] << "   ";
        if (comp[0] == arr[i] || comp[1] == arr[i])
        {
            ans += hot[arr[i]];
            continue;
        }

        if (comp[0] == 0)
        {
            comp[0] = arr[i];
        }
        else if (comp[1] == 0)
        {
            comp[1] = arr[i];
        }
        else
        {
            if (diff[comp[0]] * (ct[comp[0]]) > diff[comp[1]] * (ct[comp[1]]))
            {
                comp[1] = arr[i];
            }
            else
                comp[0] = arr[i];
        }
        ans += cold[arr[i]];
    }

    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}