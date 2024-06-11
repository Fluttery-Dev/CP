#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve(int n, vector<int> arr ){
    int m = *max_element(arr.begin(),arr.end());
    vector<int> freq(m);
    

    for (int i = 0; i < n; i++)
    {
        freq[i]++;
    }
    
    int mx=0;
    for (int i = 0; i < m; i++)
    {
        int count=0;
        while(freq[i]>0){
            count++;
            i++;
        }
        mx=max(mx,count);
    }


    return mx;
    
}