#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, y, n;

    cin >> x >> y >> n;

    if (3 * x > y)
    {
        cout << (n / 3) * y + x * (n % 3);
    }
    else
        cout << n * x;
}
