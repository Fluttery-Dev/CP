#include <bits/stdc++.h>

using namespace std;

int OPERATION(int x, int y, char op)
{
    if (op == '+')
        return x + y;

    else if (op == '*')
        return x * y;

    else
        return x - y;
}

vector<int> diffWaysToCompute(string expression)
{

    vector<int> ans;
    bool noOperation = true;
    for (int i = 0; i < expression.size(); i++)
    {
        if (!isdigit(expression[i]))
        {
            noOperation = false;
            vector<int> v1 = diffWaysToCompute(expression.substr(0, i));
            auto v2 = diffWaysToCompute(expression.substr(i + 1));

            for (auto x : v1)
            {
                for (auto y : v2)
                {
                    int t = OPERATION(x, y, expression[i]);
                    ans.push_back(t);
                }
            }
        }
    }

    if (noOperation)
        ans.push_back(stoi(expression));

    return ans;
}

int main()
{
    diff
}