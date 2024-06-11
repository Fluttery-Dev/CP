#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int power;
        cin >> power;

        vector<pair<int, int>> monster(n);
        int temp;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            monster[i].first = temp;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            monster[i].second = temp;
        }

        sort(monster.begin(), monster.end());

        bool defeated = false;

        while (power > 0)
        {
            int i;
            for (i = 0; i < n; i++)
            {
                monster[i].first -= power;
            }

            int min = INT32_MAX;
            for (i = 0; i < n; i++)
            {
                if (monster[i].first > 0 && monster[i].second < min)
                {

                    min = monster[i].second;
                }
            }

            if (monster[n - 1].first <= 0)
            {
                defeated = true;
                break;
            }

            else
                power -= min;
        }

        if (defeated)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}