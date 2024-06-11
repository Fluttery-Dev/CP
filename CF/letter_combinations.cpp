#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

unordered_map<char, string> numpad{
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}};
vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    if (digits.size() == 0)
    {
        ans.push_back("");
        return ans;
    }

    string str = numpad[digits[0]];
    vector<string> temp = letterCombinations(digits.substr(1));

    for (int i = 0; i < str.size(); i++)
    {
        for (string &s : temp)
        {
            ans.push_back(str[i] + s);
        }
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    vector<string> temp = letterCombinations(str);

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << endl;
    }
}