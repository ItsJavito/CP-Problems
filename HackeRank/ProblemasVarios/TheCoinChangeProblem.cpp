#include <bits/stdc++.h>

using namespace std;

long getWays(int n, vector<long> c) 
{
    long dp[n+1] = {};
    dp[0] = 1;

    for(long coin : c)
    {
        for (long i = 1; i<=n; i++)
        {
            if (i-coin>= 0)
            {
                dp[i] += dp[i-coin];
            }
        }
    }
    return dp[n];
}

int main(int argc, char const *argv[])
{
    vector<long> coins = {2,5,3,6};
    int n = 10;

    cout << getWays(n, coins)<<endl;

    return 0;
}
