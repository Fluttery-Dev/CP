#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    int n;
    cin >> n;
    string code, temp;

    cin >> code;

    unordered_map<char, int> lang;

    for (int i = 0; i < code.size(); i++)
    {
        lang[code[i], i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        for (int j = 1; j < temp.size(); j++)
        {
            if (lang[temp[j]] < lang[temp[j - 1]])
            {
                cout << "false";
                return 0;
            }
        }
    }

    cout << "true";
}