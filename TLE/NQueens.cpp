#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<vector<string>> boards;

bool valid(vector<string> board, int n, int i, int j)
{
    for (int k = i; k >= 0; k--)
    {
        if (board[k][j] == 'Q')
            return false;
    }

    for (int k = 1; k <= i; k++)
    {
        if (j - k >= 0)
        {
            if (board[i - k][j - k] == 'Q')
                return false;
        }

        if (j + k < n)
        {
            if (board[i - k][j + k] == 'Q')
                return false;
        }
    }

    return true;
}

void queens(int n, int row, vector<string> board)
{
    if (row == n)
    {
        boards.push_back(board);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        string r(n, '.');
        if (valid(board, n, row, i))
        {
            r[i] = 'Q';
            board.push_back(r);
            queens(n, row + 1, board);
            board.pop_back();
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    queens(n, 0, {});
    return boards;
}

void solve()
{
    int n;
    cin >> n;
    solveNQueens(n);

    for (int i = 0; i < boards.size(); i++)
    {
        for (int j = 0; j < boards[i].size(); j++)
        {
            cout << boards[i][j];
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}