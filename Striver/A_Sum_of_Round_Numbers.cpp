#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        long int num;
        int ans = 0;

        cin >> num;
        vector<int> vec;

        int i = 0;

        while (num > 0)
        {
            int t = num % 10;
            if (t != 0)
            {
                ans++;
                vec.push_back(t * pow(10, i));
            }
            num /= 10;
            i++;
        }

        cout << ans << endl;
        for (auto &&i : vec)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}