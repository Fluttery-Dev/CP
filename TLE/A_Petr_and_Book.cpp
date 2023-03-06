#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    int arr[7];

    cin >> num;

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    int i = 0;

    while (num > 0)
    {

        if (i == 7)
        {
            i = 0;
        }

        num -= arr[i];
        i++;
    }

    cout << i;
}
