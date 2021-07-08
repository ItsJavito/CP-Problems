#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int mod = 1000000007;

ll power(ll base, ll exp){
    ll res = 1;
    while(exp>0){
        if(exp&1){
            res = (res * base)%mod;  
        }
        base = (base * base)%mod; 
        exp = exp/2;
    }
    return res;
}


ll solution(ll n, ll m) 
{
    return power(power(2,n)-1, m); 
}

int main() {
    ll t;
    cin >> t;
    while(t--) 
    {
        ll n , m;
        cin >> n>> m;
        cout << solution(n,m) << endl; 
    }
    return 0;
}