#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> vec;
    string i;
    int ans = 0;

    for (int j = 0; j < n; j++)
    {

        cin >> i;

        if (i == "Tetrahedron")
            ans += 4;

        else if (i == "Cube")
            ans += 6;

        else if (i == "Octahedron")
            ans += 8;

        else if (i == "Dodecahedron")
            ans += 12;

        else
            ans += 20;
    }

    cout << ans;
}
