#include <bits/stdc++.h>
using namespace std;

// bool check (int arr[2][2]){
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             if((arr[0][0] < arr[0][1] && arr[0][0] < arr[0][1]) && arr[0][1] < arr[1][1] && arr[1][0] < arr[1][1]
//         }

//     }

// }

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int arr[2][2];
        int small = INT32_MAX;
        int small_in, max_in;
        int big = INT32_MIN;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] < small)
                {
                    small = arr[i][j];
                    small_in = i + j;
                }
                if (arr[i][j] > big)
                {
                    big = arr[i][j];
                    max_in = i + j;
                }
            }
        }
        bool possible = false;

        // for (int i = 0; i < 3; i++)
        // {
        //     check(arr);
        //     rotate(arr);
        // }

        if (small_in + max_in == 2)
        {
            possible = true;
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
