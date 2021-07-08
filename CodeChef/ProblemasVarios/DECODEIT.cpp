#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void solve(string s, int n, char a[])
{
    for (int i = 0; i < n; i = i + 4)
    {
        int indice = 0;
        string subS = s.substr(i,i+4);
        if(subS[0] == '1') indice += 8;
        if(subS[1] == '1') indice += 4;
        if(subS[2] == '1') indice += 2;
        if(subS[3] == '1') indice += 1;
        cout<< a[indice];
    }
    cout << endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    char a[] = {'a','b','c','d','e','f','g','h','i'
    ,'j','k','l','m','n','o','p'};
    while(t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        solve(s,n,a);
    }
    return 0;
}       