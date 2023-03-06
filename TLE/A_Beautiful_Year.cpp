#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool distinct(int num)
{
    string s = to_string(num);

    for (int i = 0; i < 4; i++)
    {
        if (count(s.begin(), s.end(), s[i]) != 1)
            return false;
    }

    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    num++;

    while (!distinct(num))
        num++;

    cout << num;
}