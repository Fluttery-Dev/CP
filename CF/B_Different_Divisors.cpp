#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(vector<int> &primes)
{
    int d;
    cin >> d;

    int a = *lower_bound(primes.begin(), primes.end(), d + 1);
    int b = *lower_bound(primes.begin(), primes.end(), a + d);

    cout << a * b;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;

    vector<bool> sieve(1000000, true);
    vector<int> primes;

    for (int i = 2; i < 1000000; i++)
    {
        if (sieve[i])
        {
            primes.push_back(i);
            for (int j = i * i; j < 1000000; j += i)
            {
                sieve[j] = false;
            }
        }
    }

    while (tc--)
    {
        solve(primes);
        cout << endl;
    }
}