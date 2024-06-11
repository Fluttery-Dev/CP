#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define ones __builtin_popcount
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool comp(pair<unordered_map<char, int>, int> a, pair<unordered_map<char, int>, int> b)
{
    return a.second < b.second;
}

void solve()

{
    int n;
    cin >> n;
    vector<pair<unordered_map<char, int>, int>> count(n);

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        for (int j = 0; j < str.length(); j++)
        {
            if (count[i].first.find(str[j]) == count[i].first.end())
                count[i].first[str[j]] = 1;
            else
                count[i].first[str[j]]++;
        }
        count[i].second = count[i].first.size();
    }

    sort(count.begin(), count.end(), comp);

    unordered_map<int, vector<int>> loc;

    for (int i = 0; i < count.size(); i++)
    {
        loc[count[i].second].push_back(i);
    }

    for (int i = 1; i <= 25; i++)
    {
        for(auto x:loc[i]){
            for(auto y : loc[25-i]){
                for(auto a: count[x].first)
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}