#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve(int x, int m, int d)
{
    return min(x*m,x+d);
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       int x,m,d;
       cin >> x >> m >> d;
       cout << solve(x, m, d)<<endl;
    }
    return 0;
}   