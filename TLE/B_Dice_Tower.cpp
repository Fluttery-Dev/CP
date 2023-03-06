#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;

    cin >> t;

    int base = 14;

    while (t--)
    {
        long long n;
        cin >> n;

        int ans = n % 14;

        if (ans != 0 && ans <= 6 && n >= 15)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
