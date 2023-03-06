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
        int x, y;
        cin >> x;

        bool zx = false;
        bool zy = false;

        cin >> x >> y;

        int temp;

        for (int i = 0; i < 2; i++)
        {
            cin >> temp;
            if (temp == x)
                zx = true;
            x = temp;
            cin >> temp;
            if (temp == y)
                zy = true;
            y = temp;
        }

        if (!zx || !zy)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}