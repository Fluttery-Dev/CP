// TODO: Find sieve upto n, store primes in seperate vector
// TODO: make a window of 2, for each iteration search for window_sum+1
// TODO: if found count++
// TODO: compare with k

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{

    int n, k;
    cin >> n >> k;

    if (k > n)
    {
        cout << "NO";
        return;
    }

    vector<bool> sieve(n + 1, true);
    vector<int> primes;

    for (int i = 2; i < n + 1; i++)
    {
        if (sieve[i])
        {
            primes.push_back(i);
            for (int j = i * i; j < n + 1; j += i)
            {
                sieve[j] = false;
            }
        }
    }

    int sum = 1;
    int i = 0;
    for (; i < 2 && i < primes.size(); i++)
    {
        sum += primes[i];
    }

    // for (int i = 0; i < primes.size(); i++)
    // {
    //     cout << primes[i] << " ";
    // }

    int count = 0;

    if (binary_search(primes.begin(), primes.end(), sum))
        count++;

    for (; i < primes.size(); i++)
    {
        sum += primes[i];
        sum -= primes[i - 2];
        if (binary_search(primes.begin(), primes.end(), sum))
            count++;
    }

    if (count >= k)
        cout << "YES";
    else
        cout << "NO";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}