#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve(int n, int m, vector<int> &A, vector<int> &B)
{
    int ans = 0;
    int sumaA = 0;
    int sumaB = 0;
    for(int i = 0; i<n; i++) sumaA += A[i];
    for(int i = 0; i<m; i++) sumaB += B[i];
    int dif = sumaB-sumaA;
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end()); 
    
    if (dif < 0) return 0;
    else
    {
        for (int i = 0; i < n; i++)
        {
            int value = B[n-1-i] - A[0+i];
            sumaA += value;
            sumaB -= value;
            ans++;
            if (sumaA>sumaB) break;
        }
    }
    if(sumaB>sumaA) return -1;
    else return ans;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> A(n,0);
        vector<int> B(m,0);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < m; i++) cin >> B[i];
        cout << solve(n,m,A,B) << endl;
    }
    return 0;
}   