#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void fuck(){
    vector<bool> arr(100000000,true);

    for (int i = 2; i < 1e8; i++)
    {
        if(arr[i]){
            for (int j = i*i; j < 1e8 ; j+=i)
            {
                    arr[j] = false;
            }
            
        }
    }
    int count = 1;
    for (int i = 2; i < 1e8; i++)
    {
        if(arr[i]){
            
            if(count%100 == 1)
                cout<<i<<"\n";
            
            count++;
            
        }
    }
    
    
}
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);
fuck();
}