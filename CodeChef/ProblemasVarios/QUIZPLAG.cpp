#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<int> solve(int n, int m, int k, int L[])
{
    vector<int> ans;
    bool temp = true;
    int ar[n+1] = {};

    for (int i = 0; i < k; i++)
    {
        if(1 <= L[i] && n >= L[i] )
        {
            ar[L[i]]++;
        }
    }
    for (int i = 0; i < n+1; i++)
    {
        if (ar[i]>1) ans.push_back(i);
    }

    return ans;
}   

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int L[k];
        for(int i = 0; i<k; i++) cin >> L[i];
        vector <int> ans = solve(n,m,k, L);
        cout << ans.size() << " ";
        for (int i = 0; i < ans.size() ; i++) cout << ans[i] <<" "; 
        cout << endl;
    }
    return 0;
} 