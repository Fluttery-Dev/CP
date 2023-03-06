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

        long l, r;
        cin >> l >> r;

        long lr = min(l, r);
        long rr = max(l, r);

        long long sum = ((rr * 1ll * (rr + 1)) / 2);
        sum -= ((lr * 1ll * (lr - 1)) / 2);
        cout << sum << "\n";
    }
}