#include <bits/stdc++.h>
using namespace std;

int freq[10000000];

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int t;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        nums.push_back(t);
    }
    bool permute = true;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        auto it = find(nums.begin(), nums.end(), t);

        if (it != nums.end())
            nums.erase(it);
        else
            permute = false;
    }

    if (permute)
        cout << "yes";
    else
        cout << "no";
}
