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
unordered_map<int, list<int>> adj;
vector<bool> visited(1000, false);

void dfs(int n)
{
    cout << n << " ";
    visited[n] = true;
    for(auto &c : adj[n])
        if(!visited[c]) dfs(c);
}

void solution() {
    int n, s, d; 
    cin >> n;
    for(int i = 0 ; i  < n; ++i){
        cin >> s >> d;
        adj[s].pb(d);
        adj[d].pb(s);
    }
    dfs(2);
    cout << endl;
}

int main() {

    fastio;
    int t ;
    cin >> t;
    while(t--) {
        adj.clear();
        visited = vector<bool>(1000, false);
        solution();
    }
    return 0;
}