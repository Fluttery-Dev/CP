#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    char ch;
    int winner = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ch;

        if (ch == 'A')
            winner++;
        else
            winner--;
    }

    if (winner == 0)
        cout << "Friendship";

    else if (winner > 0)
        cout << "Anton";

    else
        cout << "Danik";
}
