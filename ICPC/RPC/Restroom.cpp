#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
 
int main() {
    fastio;
    int s,t;
    cin >> s >> t;
    vector<int> n;
    vector<int> y;
    while(t--)
    {
        int pr;
        char ba;
        cin >> pr >> ba; 
        if(ba ==  'y') y.push_back(pr);
        if(ba == 'n') n.push_back(pr);
    }

    int i, j; 

    

    cout << "Yes" << endl;
    return 0;
}