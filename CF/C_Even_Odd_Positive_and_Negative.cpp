#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int positive = 0, negetive = 0, odd = 0, even = 0;

    int t;

    for (int i = 0; i < n; i++)
    {

        cin >> t;

        if (t > 0)
            positive++;
        else if (t < 0)
            negetive++;

        if (t % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << "\n"
                                "Odd: "
         << odd << "\n"
                   "Positive: "
         << positive << "\n"
                        "Negative: "
         << negetive;
}
