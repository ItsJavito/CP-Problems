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

int main() {
    fastio;
    int n , dif , max = INT_MIN, min = INT_MAX; cin >> n;
    ll cantmin = 0, cantMax= 0 , cant;
    vi ar(n);
    for(auto &c: ar){
        cin >> c;
        max = std::max(max , c);
        min = std::min(min , c);
    }
    dif = max - min;
    for(auto &c : ar){
        cantmin += c == min ? 1 : 0;
        cantMax += c == max ? 1 : 0;
    }
    if(min != max) cant = cantmin*cantMax;
    else cant = (1LL*n*(n-1))/2; // poner 1LL para que no sea overflow xd
    cout << dif << " " << cant << endl; 

    return 0;
}