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
    int ans = 0, cont;
    cin >> t;
    string name , key, value;
    map<string, string> map;
    while(t--)
    {
        cin >> name >> key >> value;
        map[key] = value;
    }
    for(pair<string, string> c : map)
    {
        cont = 0;
        string val = c.second; 
        for(int i = 0; i<t ; i++)
        {
            if(map[map[val]] == ""){
                
                map.erase(map[val]);
                break;
            }else{
                val = map[map[val]];
                cont++;
            }
            if(val == c.first){
                ans = max(ans, cont);
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}