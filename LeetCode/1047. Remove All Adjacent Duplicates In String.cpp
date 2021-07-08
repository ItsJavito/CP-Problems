#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string ans = "";
    string str = "azxxzy";
    stack<char> pila;

    for(auto &a : str){
        if(pila.size() == 0){
            pila.push(a);
        }
        else{
            if(pila.top() == a){
                pila.pop();
            }else{
                pila.push(a);
            }
        }
    }
    
    while(!pila.empty())
    {
        ans += pila.top();
        pila.pop();
    }
    reverse(ans.begin(), ans.end());

    cout << ans << endl;
    return 0;
}