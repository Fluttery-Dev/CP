#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string solve(string s)
{

 stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (st.empty())          
            st.push(s[i]);
    
        else if ((st.top() == '(' && s[i] == ')')
                 || (st.top() == '{' && s[i] == '}')
                 || (st.top() == '[' && s[i] == ']')) 
            
            st.pop();
        
        else {
            st.push(s[i]);
        }
    }
    string ans;
    if (st.empty())
        ans  = "YES";
    
    else ans="NO";
    return ans;}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    cout<<solve(s);
}

