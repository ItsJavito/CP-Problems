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


int solution() {
    int cont = 0;

    ll a,b,c,d,f,g,h,i;
    map<ll , int> map;
    cin >> a >> b >> c;
    cin >> d >> f;
    cin >> g >> h >> i;

    if((a + c) == b*2) cont++;
    if((g + i) == h*2) cont++;
    if((a + g) == d*2) cont++;
    if((c + i) == f*2) cont++;
    
    if((a+i)%2 == 0)map[a+i]++;
    if((c+g)%2 == 0)map[c+g]++;
    if((b+h)%2 == 0)map[b+h]++;
    if((d+f)%2 == 0)map[d+f]++;

    int maxi = 0;
    for(auto &c : map){
        maxi = max(maxi , c.second);
    }

    cont += maxi;
    return cont;
}
int main() {

    fastio;
    int t , c = 0;
    cin >> t;
    while(t--) {
        c++;
        cout << "Case #" << c << ": ";
        cout <<  solution() << endl;
    }
    return 0;
}