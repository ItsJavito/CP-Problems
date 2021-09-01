#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define ll long long
#define PI 3.1415926535897932384626
#define fo(i, n) for(i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const int mod = 1'000'000'007;
const int N = 3e5;

ll modpow(ll x, ll e) {
if (e == 0) return 1;
ll a = modpow(x, e >> 1);
a = a * a % mod;
if (e & 1) a = a * x % mod;
return a;
}

void solution() {
    int n, k, tam;
    ll ans = 0;
    string s, sub;
    cin >> n >> k >> s;
    tam = round(1.0f*n/2);
    sub = s.substr(0, tam);
    for(int i = tam-1, j = 0 ; i >= 0 ; i--, j++){
        int dig = sub[i] - 'a' ; 
        ans += dig*modpow(k,j);
        ans %= mod;
    }
    for(int i = tam; i < n; i++){
        if(s[i] > s[n-1-i]){
            ans++; break;
        }
        if(s[i] < s[n-1-i]) break;
    }
    cout << (ans + mod)%mod << endl; 
}
int main() {

    fastio;
    int t, n = 1; 
    cin >> t;
    while(t--) {
        cout << "Case #" << n++ << ": ";
        solution();
    }
    return 0;
}