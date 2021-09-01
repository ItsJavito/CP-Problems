/*
ID: javiere1
PROG: ride
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
    setIO("ride");
    ll sum1 = 1 , sum2 = 1;
    string cometa, group;
    cin >> cometa;
    for(int i = 0; i < cometa.size() ; ++i){
        int n = cometa[i] - '0' - 16;
        sum1 *= n;
    }
    cin >> group;
    for(int i=0; i<group.size(); ++i){
        int n = group[i] - '0' - 16;
        sum2 *= n;
    }
    if(sum1%47 == sum2%47) cout << "GO" << endl;
    else cout << "STAY" << endl;
}