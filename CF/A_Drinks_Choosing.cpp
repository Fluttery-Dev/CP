#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> freq(k + 1, 0);
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        freq[t]++;
    }

    int odd = 0;
    for (int i = 0; i < k; i++)
    {

        if (freq[i + 1] & 1)
            odd++;
    }

    cout << n - odd / 2;
}