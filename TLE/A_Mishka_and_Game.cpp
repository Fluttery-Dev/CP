#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int score = 0;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
            score++;
        else if (a < b)
            score--;
    }

    if (score == 0)
        cout << "Friendship is magic!^^";
    else if (score > 0)
        cout << "Mishka";
    else
        cout << "Chris";
}