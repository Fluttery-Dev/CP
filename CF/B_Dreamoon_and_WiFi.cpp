#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int fact(int n)
{
    return ((n == 0 || n == 1) ? 1 : n * fact(n - 1));
}

void solve()
{
    string str;
    cin >> str;
    string unknown;
    cin >> unknown;

    int count1 = 0;
    int count2 = 0;
    int countq = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '+')
            count1++;
        else
            count2++;

        if (unknown[i] == '+')
            count1--;
        else if (unknown[i] == '-')
            count2--;

        else
            countq++;
    }
    cout << fixed << setprecision(12);
    if (count1 < 0 || count2 < 0)
    {
        cout << (double)0;
        return;
    }
    else if (!(count1 || count2))
    {
        cout << (double)1;
        return;
    }

    double ans = fact(countq) / (double)(fact(count1) * fact(count2));
    ans /= pow(2, countq);
    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}