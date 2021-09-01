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

class UnionFind {
    public: 
        int count = 0;
        vi parent, rank;

    UnionFind(int n) {
        count = n;
        parent = vi(n+1,0);
        rank = vi(n+1,0);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int find(int p) {
        while (p != parent[p]) {
            parent[p] = parent[parent[p]];    // path compression by halving
            p = parent[p];
        }
        return p;
    }

    void Union(int p, int q) {
        int rootP = find(p);
        int rootQ = find(q);
        if (rootP == rootQ) return;
        if (rank[rootQ] > rank[rootP]) {
            parent[rootP] = rootQ;
        }
        else {
            parent[rootQ] = rootP;
            if (rank[rootP] == rank[rootQ]) {
                rank[rootP]++;
            }
        }
        count--;
    }
};

int main() {
    fastio;
    int n , h; cin >> n >> h;
    UnionFind *disj = new UnionFind(n);
    unordered_set<int> s , f; 
    FOR(i , h){
        int j, k; cin >> j >> k;
        disj->Union(j,k);
        s.insert(j); s.insert(k);
    }
    int cant , frat = 0;
    for(int i = 1 ; i <= n; i++){
        if(i == disj->parent[i]) continue;
        f.insert(disj->parent[i]);
    }
    cant = n - s.size();
    frat = f.size();
    cout << frat << " " << cant << endl;
    return 0;
}