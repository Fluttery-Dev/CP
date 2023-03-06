#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    string str;
    cin >> str;
    stack<char> st;
    int in;
    int length = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '<')
        {
            if (st.empty())
                in = i;
            st.push(str[i]);
        }
        else if (st.empty())
            continue;
        else if (st.top() == '<')
        {
            st.pop();
            length = max(length, i - in + 1);
        }
    }
    cout << length;
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