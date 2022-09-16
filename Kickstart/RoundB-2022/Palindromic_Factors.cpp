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
    ll A;
    int ans = 0; 
    cin >> A; 
    for (ll i = 1 ; i <= 1e5
    ; i++)
    {
        string s1, s2 , s3 , s4;
        ll n1, n2;
        s1 = to_string(i);
        s4 = to_string(i);
        s2 = to_string(i);
        s3 = to_string(i).substr(0, s2.length()-1);
        reverse(all(s2));
        reverse(all(s3));
        s1 += s2;
        s4 += s3; 
        n1 = stoll(s1, nullptr, 10);
        n2 = stoll(s4 , nullptr, 10);
        ans += (A%n1 == 0) + (A%n2 == 0);
    }
    cout << ans << endl; 
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