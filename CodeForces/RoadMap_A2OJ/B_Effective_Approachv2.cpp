#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define br printf("\n")
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
 
int main() {
    fastio;
    int n,m,b;
    cin >> n;
    vi a(n,0);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    vi que(m,0);
 
    for(int i = 0; i<m; i++){
        cin >> que[i];
    }
 
 
    ll pety = 0;
    ll vas = 0;

    for(auto x : que){
        int cont = 0;
        for(auto v: a){
            cont++;
            if(v == x) {
                vas += cont;
                pety += n-cont+1;
                break;
            }
        }
    }
 
    cout << vas << " " << pety;
    return 0;
}