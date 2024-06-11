#include<bits/stdc++.h>

using namespace std;


const int MAXN = 2e5+5;
int BIT[MAXN], a[MAXN], b[MAXN];

void update(int x, int delta) {
    for(; x < MAXN; x += x&-x)
        BIT[x] += delta;
}

int query(int x) {
    int sum = 0;
    for(; x > 0; x -= x&-x)
        sum += BIT[x];
    return sum;
}


int countSubarrays(std::vector<int>& a, int n) {
    std::fill(BIT, BIT + MAXN, 0);
    std::vector<long long> b(n+1);
    long long prefixSum = 0;
    long long count = 0;
    for (int i = 1; i <= n; ++i) {
        prefixSum += a[i-1];
        b[i] = prefixSum;
    }
    std::sort(b.begin()+1, b.end());
    int m = std::unique(b.begin()+1, b.end()) - b.begin() - 1;
    update(std::lower_bound(b.begin()+1, b.begin()+m+1, 0LL) - b.begin(), 1);
    prefixSum = 0;
    for (int i = 1; i <= n; ++i) {
        prefixSum += a[i-1];
        count += query(std::upper_bound(b.begin()+1, b.begin()+m+1, prefixSum) - b.begin() - 1);
        update(std::lower_bound(b.begin()+1, b.begin()+m+1, prefixSum) - b.begin(), 1);
    }
    return count;
}
void helper(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>> arr[i];
    cout<<countSubarrays(arr,n)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) helper();
}