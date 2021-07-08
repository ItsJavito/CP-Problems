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
    if(sum %2 == 0){
        int medio = sum/2;
        int acum = 0;
        int j = 0;
        for(int i = 0; i < n ; ){
            if(acum == medio){
                cont++;
                acum -= circ[i++];
                acum += circ[j++];
            }else if(acum < medio)
            {
                acum += circ[j++];
            }else{
                acum -= circ[i++];
            }
            if(j == n) j = 0;
        }
    }
    if(cont > 2){
        cout << "Y" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}