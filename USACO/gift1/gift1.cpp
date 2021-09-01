/*
ID: javiere1
PROG: gift1
LANG: C++                  
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s + ".in").c_str(), "r", stdin);freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("gift1");
    int np, monto, ngi; unordered_map<string,  int> map;
    vector<string> nom;
    cin >> np;
    
    for(int i=0; i<np;++i){
        string s;
        cin >> s;
        map.insert({s,0});
        nom.push_back(s);
    }
    string dador;
    for(int i=0; i<np; ++i){
        cin >> dador;
        cin >> monto >> ngi;
        map[dador] -= monto;

        if(ngi > 0){
            string abonado;
            int din = monto/ngi;
            for(int j=0; j<ngi;++j){
                cin >> abonado;
                map[abonado] += din;
            }
            map[dador] += monto%ngi;
        }
    }

    for(int i = 0; i<nom.size() ; ++i){
        cout << nom[i] << " " << map[nom[i]] << endl;
    }
}