#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    int sum = n % 10;
    cin >> n;
    sum += n % 10;

    cout << sum;
}