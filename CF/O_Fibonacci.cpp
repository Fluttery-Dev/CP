#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    long long first = 0;
    long long second = 1;

    if (n <= 2)
    {
        cout << n - 1;
        return 0;
    }

    long long term = 0;

    for (int i = 3; i <= n; i++)
    {
        term = first + second;
        first = second;
        second = term;
    }
    cout << term;
}