#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double n;
    cin >> n;

    double d = n - floor(n);

    if (d == 0)
        cout << "int " << n;
    else
        cout << "float " << (int)floor(n) << " " << d;
}