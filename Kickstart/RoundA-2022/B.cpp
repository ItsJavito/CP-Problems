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

int to_int(char c){
    return c - '0';
}

void solution() {
    string n; cin >> n;
    ll sum = 0;
    for(auto &c : n)
        sum += to_int(c);
    int ans = (sum%9 == 0) ? 0 : 9 - sum%9; 

    if(ans == 0){
        cout << n[0] << ans << n.substr(1) << endl;
        return; 
    }
    for(int i = 0 ; i < n.size() ; i++){
        if(to_int(n[i]) > ans){
            cout << n.substr(0, i) << ans << n.substr(i , n.size() - i) << endl;
            return; 
        }
    }
    cout << n << ans << endl; 
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