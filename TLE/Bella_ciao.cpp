#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;

    cin >> t;

    while (t--)
    {
        int n, d, p, q;

        cin >> n >> d >> p >> q;

        int a = n / d;

        long long int ans = n * p + q * (n * a - (a * (a + 1)) / 2 * d);

        cout << ans << "\n";
    }
}