#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

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
        int temp;
        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(make_pair(i, temp));
        }

        sort(arr.begin(), arr.end(), sortbysec);
        int base = arr[0].second;
        int count = 0;

        for (int i = 1; i < n; i++)
        {
            if (arr[i].second % arr[i - 1].second != 0)
                count++;
        }

        cout << count << endl;

        for (int i = 1; i < n; i++)
        {
            if (arr[i].second % arr[i - 1].second != 0)
            {
                int temp = arr[i].second;
                arr[i].second = arr[i - 1].second * ceil((double)arr[i].second / arr[i - 1].second);
                cout << arr[i].first + 1 << " " << arr[i].second - temp << "\n";
            }
        }
    }
}