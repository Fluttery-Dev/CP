#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<string> vec;

    cin >> n;
    string temp;
    int m = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
        m = min(m, (int)temp.size());
    }
    string st;
    for (int i = 0; i < m; i++)
    {
        int t = vec[0][i];
        for (int j = 0; j < n; j++)
        {
            if (vec[j][i] != t)
            {
                cout << st;
                return 0;
            }
        }
        st += t;
    }
}