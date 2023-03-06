// TODO: no of dicisors = (x+1)*(y+1)*....
//  TODO: sum of div : (a^(x+1)-1)/(a-1)) *(b^(y+1)-1)/(b-1) ...
//  TODO : prod : a^(x *(x+1)/2) ....
//  TODO: vector of pairs , prime,power
//  TODO: compute

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int pow(int a, int b)
{
    if (b == 0)
        return 1;

    int t = pow(a, b / 2) % MOD;
    t = (t * t) % MOD;
    if (b & 1)
        return (a * t) % MOD;
    return t;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> factorisation(n);
    for (int i = 0; i < n; i++)
    {
        cin >> factorisation[i].first;
        cin >> factorisation[i].second;
    }

    int count = 1;
    int sum = 1;
    int t;
    int a, x;
    for (int i = 0; i < n; i++)
    {
        a = factorisation[i].first;
        x = factorisation[i].second;
        count = (count * (x + 1)) % MOD;
        int k = pow(a - 1, MOD - 2);
        t = (pow(a, x + 1) - 1) * k % MOD;
        sum = (sum * t) % MOD;
    }

    int prod = 1, d = 1;

    for (auto itr : factorisation)
    {

        int val = pow(itr.first,
                      (itr.second) * (itr.second + 1) / 2);

        // Update the product
        prod = (pow(prod, itr.second + 1) * pow(val, d)) % MOD;

        // Update the count of divisors
        d = (d * (itr.second + 1)) % (MOD - 1);
    }

    cout << count << " " << sum << " " << prod;
}