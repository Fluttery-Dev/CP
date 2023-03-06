#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < 12; i++)
    {
        cout << n << " * " << i + 1 << " = " << n * (i + 1) << endl;
    }
}