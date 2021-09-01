#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define ll long long int
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vl;
const int mod = 1000000007;

ll modpow(ll x, ll e) {
    if (e == 0) return 1;
    ll a = modpow(x, e >> 1);
    a = a * a % mod;
    if (e & 1) a = a * x % mod;
    return a;
}

void solution() {

    int n; vl ar; ll res = 0; 
    cin >> n;
    for(int i=0; i<n ; i++){
        ll num; cin >> num;
        ar.pb(num);
    }
    ll mayor = 0, menor = 0;
    for(ll i = 0; i < n; i++){
        mayor += ar[i] * modpow(2,i);
        mayor %= mod;
        menor += ar[i] * modpow(2,n-1-i);
        menor %= mod;
    }
    res = (mayor - menor + mod) % mod;
    cout << res << endl;
}
int main() {
    fastio;
    int t ;
    cin >> t;
    int n = 1;
    while(t--) {
        cout << "Case #" << n << ": ";
        solution();
        n++;
    }
    return 0;
}