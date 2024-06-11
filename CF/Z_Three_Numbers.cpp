#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, n;
    cin >> k >> n;
    int count = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (i + j + k >= n && i + j <= n)
                count++;
        }
    }
    cout << count;
}
