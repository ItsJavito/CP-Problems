#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int count = 0;
        int n,m;
        cin >> n;
        cin >> m;
        unordered_map<char, int> map = {{'m',0},{'a',0},{'n',0}, {'o',0}};
        char table[n][m] = {};
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin >> table[i][j];
            }
        }

        for(int i = 0; i<n-1; i++){
            for(int j = 0; j<m-1; j++){
                map[table[i][j]]++;
                map[table[i][j+1]]++;
                map[table[i+1][j+1]]++;
                map[table[i+1][j]]++;
                if(map['m'] == 1 && map['a'] == 1 && map['n'] == 1 && map['o'] == 1){
                    count++;
                }
                map['m'] = 0;
                map['a'] = 0;
                map['n'] = 0;
                map['o'] = 0;
            }
        }
        cout << count << endl ;
    }
    return 0;
}