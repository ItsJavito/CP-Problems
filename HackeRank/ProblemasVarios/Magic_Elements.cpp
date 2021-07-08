#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve(long n, vector<long> &ar, long K )
{
    long sum = 0;
    int count = 0;
    for (long i = 0; i <n ; i++) sum += ar[i];

    for (long i = 0; i < n; i++)
    {
        if(ar[i] + K > sum-ar[i]) count++;
    }
    return count;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while(t--)
    {
        long N = 0;
        long K = 0;
        cin >> N >> K;
        vector<long> ar(N,0);
        for (long i = 0; i < N; i++)
        {
           cin >> ar[i];
        }
        cout << solve(N, ar, K) <<endl;
    }
    return 0;
}