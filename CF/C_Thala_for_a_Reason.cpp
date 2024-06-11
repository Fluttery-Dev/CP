#include<bits/stdc++.h>

using namespace std;


int helper(int balls, int runs, int w){

    
    if(runs <= 0) return 1;
    if(w == 0 || balls ==0) return 0;
    
    vector<int> arr(7);
    
    arr[0] = helper(balls-1,runs, w);
    arr[1] = helper(balls-1,runs-1, w);
    arr[2] = helper(balls-1,runs-2, w);
    arr[3] = helper(balls-1,runs-3, w);
    arr[4] = helper(balls-1,runs-4, w);
    arr[5] = helper(balls-1,runs-6, w);
    arr[6] = helper(balls-1,runs, w-1);

    return accumulate(arr.begin(), arr.end(),0);
}

int main(){

    int x,y;

    cin>>x>>y;

    cout<<helper(6,x, y);
    return 0;
}