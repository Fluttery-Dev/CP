#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, k;
    cin >> n >> k;

    long long d = ceil(n / 2.0);

    if (k <= d)
        cout << 2 * k - 1;

    else
        cout << 2 * (k - d);
}
