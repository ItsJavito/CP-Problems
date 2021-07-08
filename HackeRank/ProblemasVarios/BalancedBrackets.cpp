#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string isBalanced(string s) 
{
    int tam = s.size();
    stack <char> s1;
    for(auto &c : s){
        if(c == '(' || c == '[' || c == '{'){
            s1.push(c);
        }else{
            if(s1.top() == '(' && c == ')'){s1.pop(); continue;}
            else if(s1.top() == '[' && c == ']') {s1.pop(); continue;}
            else if(s1.top() == '{' && c == '}') {s1.pop(); continue;}
            else {return "NO" ; break;}
        }
    }
    return "YES";
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s; 
        cout << isBalanced(s) << endl;
    }
    return 0;
}