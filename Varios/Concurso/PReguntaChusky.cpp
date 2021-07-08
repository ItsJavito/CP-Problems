#include <iostream>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const int mod = 1'000'000'007;
 
long long solve(int n)
{
    long long dp[n + 1];
 
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = 0;
        for (int j = 0; j < i; j++)
            dp[i] += dp[j] * dp[i - j - 1];
    }
    return dp[n];
}
 
// Driver code
int main()
{
    fastio;

    int n;
    cin >> n;
    while(n--){
        int r;
        cin >> r;
        cout << solve(r) << endl;
    }
    return 0;
}