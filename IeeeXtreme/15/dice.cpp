#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define ll long long
#define PI 3.1415926535897932384626
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl;
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define FOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define FOREACH(i,t) for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define REP(i,a,b) for(int (i)=(a);(i)<=(b);++i)
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

void solution() {
    bool change = false; 
    int suml = 0 , sumr = 0;
    double dado1 = 0, dado2 = 0;  
    int n; cin >> n;
    for(int i = 0 ; i < n ; i++){
        double  l , r; cin >> l >> r;
        suml += l; sumr += r;
        if(change){
            if(r == 6) dado1++;
            if(l == 6) dado2++; 
        }
        else{
            if(l == 6) dado1++;
            if(r == 6) dado2++;
        }
        change = suml != sumr; 
    }
    if(abs(1.0*dado1/n - 2.0/7) < abs(1.0*dado2/n - 2.0/7)){
        cout << 1 << endl;
    }
    else cout << 2 << endl;
}
int main() {
    fastio;
    int t ;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}