#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int solve(int n)
{   
    return (n%2== 0) ? n/2 : n/2 + 1;
}
int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        cout << solve(n)<< endl;
    }
    return 0;
}   