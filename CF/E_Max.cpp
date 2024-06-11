#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    int m = INT16_MIN;
    int n;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        m = max(n, m);
    }
    cout << m;
}