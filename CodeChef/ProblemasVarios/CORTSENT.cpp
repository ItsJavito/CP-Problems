#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string solve(int k, string S[])
{
    for (int i = 0; i<k ; i++)
    {
        string word = S[i];
        if (word[0]>= 'a' && word[0]<='m')
        {
            for (int i = 0; i < word.size(); i++)
            {
                if(word[i]>= 'a' && word[i]<='m') continue;
                else return "NO"; 
            }
        }
        else
        {
            for (int i = 0; i < word.size(); i++)
            {
                if(word[i]>= 'N' && word[i]<= 'Z') continue;
                else return "NO";
            }
        }
    }
    return "YES";
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int k;
        cin >> k;
        string S[k];
        for (int i = 0; i < k; i++) cin >> S[i];
        cout << solve(k,S) << endl;
    }
    return 0;
}   