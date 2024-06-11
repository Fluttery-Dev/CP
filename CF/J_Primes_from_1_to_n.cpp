#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<bool> prime(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";

            for (int j = i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
