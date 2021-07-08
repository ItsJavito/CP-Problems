#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n ;
    stack<int> s1; 
    stack<int> s2;
    cin >> n;
    for(int i = 0; i<n; i++){
        int a, b;
        cin >> a;
        if(a == 1){
            cin >> b;
            s1.push(b);
        }
        else if(a == 2)
        {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        else
        {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            cout << s2.top() << endl;
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }             
        }
    }
    return 0;
}