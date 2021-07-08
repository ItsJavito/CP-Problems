#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve(int n, int k, vector<int> &A)
{
    int sumA = 0;
    int sumB = 0;
    sort(A.begin(), A.end());
    if(n%2 != 0)
    {
        int ptr = n-1;
        for (int i = 0; i < k; i++)
        {
            sumA += A[ptr];
            sumB += A[ptr-1];
        }
        sumB += A[0];
    }
    if (n%2 == 0){
        for (int i = 0; i < (k-1)*2; i = i+2)
        {
            sumA += A[n-1-i];
            sumB += A[n-2-i];
        }
        sumA+= A[0] + A[1];
    }
    return max(sumA,sumB);
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>A(n,0);
        for (int i = 0; i<n; i++) cin >> A[i];
        cout << solve(n,k,A) << endl;
    }
    return 0;
}   