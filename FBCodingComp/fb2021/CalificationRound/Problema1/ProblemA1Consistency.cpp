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
    int ans = 0 , mc = 0 , mv = 0, sumc = 0, sumv = 0; 
    string s , vow = "AEIOU"; cin >> s;
    unordered_map<char, int> map;
    for(int i = 0 ; i < s.size() ; i++){
        map[s[i]]++;
        if(vow.find(s[i]) != string::npos) mv = max(mv, map[s[i]]);
        else mc = max(mc, map[s[i]]);
    }
    if(map.size() == 1) {cout << ans << endl; return;}
    for(auto &c : map){
        // deb(c.first); deb(c.second);
        if(vow.find(c.first) != string::npos){
            sumv += c.second;
        }
        else sumc += c.second;
    }
    ans = min( sumc + 2*(sumv-mv) , sumv + 2*(sumc - mc));
    cout << ans << endl; 
}
int main() {
    fastio;
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w" , stdout);
    int t, n = 1;
    cin >> t;
    while(t--) {
        cout << "Case #" << n++ << ": "; 
        solution();
    }
    return 0;
}