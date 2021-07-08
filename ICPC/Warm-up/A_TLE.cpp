#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define ll long long
typedef vector<int> vi;
 
int main() {
    fastio;
    int n , sum = 0 , cont = 0;;
    cin >> n;
    vi circ (n);
    for(auto &c : circ) {
        cin >> c;
        sum += c;
    }
    for(int i = 0; i < n; ++i)
    {
        int acum = circ[i];
        for(int j = i+1; j != i; ++j){
            if(j == n) j = 0;
            acum += circ[j];
            if(acum*2 <= sum){
                if(acum*2 == sum)
                {
                    cont++;
                    if(cont > 2){
                        cout << "Y" << endl;
                        return 0;
                    }
                    break;
                }
                continue;
            }
            break;
        }
    }
    cout << "N" << endl;
    return 0;
}