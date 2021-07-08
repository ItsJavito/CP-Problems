#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int solve(vector<int> A, int n, int k, int d)
{
    int suma = 0;
    for (int i = 0; i < n; i++) suma += A[i];
    int dias = suma/k;
    if(dias>d) return d;
    else return dias;
    
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> A(n,0);
        for (int i = 0; i < n; i++) cin >> A[i];
        cout << solve(A, n, k , d) <<endl;
    }
    return 0;
}