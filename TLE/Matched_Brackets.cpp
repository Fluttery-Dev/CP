#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n;
    cin >> n;
    int str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    stack<int> st;
    int depth = LLONG_MIN;
    int in;
    int out;
    int ans;
    int length = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 1)
        {
            st.push(1);
            if ((long long)st.size() > depth)
            {
                depth = (long long)st.size();
                in = i + 1;
            }
            if (st.size() == 1)
            {
                out = i + 1;
            }
        }
        else
        {
            st.pop();
            if (st.size() == 0)
            {
                if (i - out + 2 > length)
                {
                    length = i - out + 2;
                    ans = out;
                }
            }
        }
    }

    cout << depth << " " << in << " " << length << " " << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}