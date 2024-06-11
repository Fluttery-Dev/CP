#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long x, y, z;
    cin >> x >> y >> z;

    long long a = x / z;
    long long b = y / z;

    long long maxS = (x + y) / z;

    long long diff = maxS - a - b;

    diff *= z;

    long long ans = 0;

    if (diff != 0)
    {
        a = x % z;
        b = y % z;

        ans = diff - max(a, b);

        if (ans > min(a, b))
            ans = 0;
    }

    cout << maxS << " " << ans;
}
