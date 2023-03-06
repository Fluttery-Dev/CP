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
        long int num;
        cin >> num;
        vector<int> vec;

        int i = 1;

        while (num > 0)
        {
            int t = num % 10;
            if (t != 0)
                vec.push_back(t * i);

            num /= 10;
            i *= 10;
        }

        cout << vec.size() << "\n";
        for (auto &&i : vec)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}