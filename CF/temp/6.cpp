#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isNumber(const string &s)
{
    for (char const &ch : s)
    {
        if (std::isdigit(ch) == 0)
            return false;
    }
    return true;
}

bool isUpper(const std::string &s)
{
    return std::all_of(s.begin(), s.end(), [](unsigned char c)
                       { return std::isupper(c); });
}

bool isLower(const std::string &s)
{
    return std::all_of(s.begin(), s.end(), [](unsigned char c)
                       { return std::islower(c); });
}

vector<string> getPasswordStrength(vector<string> passwords, vector<string> common_words)
{
    vector<string> ans;

    for (string password : passwords)
    {
        if (password.size() < 6 || isNumber(password) || isUpper(password) || isLower(password))
        {
            ans.push_back("weak");
            continue;
        }

        bool weak = false;
        for (string str : common_words)
        {
            if (password.find(str) != string::npos)
            {
                weak = true;
                break;
            }
        }
        if (weak)
            ans.push_back("weak");
        else
            ans.push_back("strong");
    }

    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> pass = {"hello", "chargeR", "pass123"};
    vector<string> word = {"hello", "123", "password", "xyz", "999"};
    vector<string> strength = getPasswordStrength(pass, word);
    for (string str : strength)
    {
        cout << str << endl;
    }
}