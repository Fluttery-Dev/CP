#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// defining structure of an operation

typedef struct
{
    int start;
    int end;
    int val;
    int count = 0;
} op;

// solving the problem

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> nums(n + 1);
    vector<op> vec(m + 1);

    // taking initial array as input

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // taking operations as input

    for (int i = 0; i < m; i++)
    {
        cin >> vec[i].start;
        cin >> vec[i].end;
        cin >> vec[i].val;
    }

    // increasing the operation count based on values of k

    int x, y;
    while (k--)
    {
        cin >> x >> y;
        vec[x - 1].count++;
        vec[y].count--;
    }

    // prefix sum of operations to get real operation count
    for (int i = 1; i < m + 1; i++)
    {
        vec[i].count += vec[i - 1].count;
    }

    // calculation final array by increasing by a factor of (operation val*operation count)
    vector<int> temp(n + 1);
    for (int i = 0; i < m; i++)
    {
        int factor = vec[i].val * vec[i].count;
        temp[vec[i].start - 1] += factor;
        temp[vec[i].end] -= factor;
    }
    // taking prefix sum and printing

    partial_sum(temp.begin(), temp.end(), temp.begin());

    for (int i = 0; i < n; i++)
    {
        nums[i] += temp[i];
        cout << nums[i] << " ";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}