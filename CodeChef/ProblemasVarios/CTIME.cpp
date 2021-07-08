#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"


using namespace std;

string solve(int n, int k, int f, vector<int> &s, vector<int> &e)
{
    int time = 0;
    if (n>1)
    {
        for (int i = 1; i < n; i++)
        {
            time += s[i] - e[i-1];
        }
    }
    time += f - e[n-1];
    if (time >= k) return "YES";
    else return "NO";
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,k,f;
        vector<int> s;
        vector<int> e;

        cin >> n >> k >> f;
        for (int i = 0; i<n ; i++)
        {
            int inicio;
            int final;
            cin >> inicio >> final;
            s.push_back(inicio);
            e.push_back(final);
        }
        cout << solve(n,k,f,s,e) << endl;
    }
    return 0;
}