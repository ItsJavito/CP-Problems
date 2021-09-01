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
/*
Consiste en encontrar la profundidad del grafo, con dfs hallamos esa profundidad
en un arreglo vamos sumando y el máximo dentro de ese arreglo será la profundidad 
de nuestro grafo. 
*/

vi adj[2001] , a(2001, 0) , h(2001, 0);
vector<bool> vs (2001);

void dfs(int i){
    vs[i] = true;
    for(auto &c : adj[i]){
        if(!vs[c]){
            h[c] = h[i] + 1;
            dfs(c);
        }
    }
}

int main() {
    fastio;
    int n; cin >> n;
    REP(i, 1 , n){
        cin >> a[i];
        if(a[i] == -1)continue;
        adj[a[i]].push_back(i);
    }

    REP(i, 1, n){
        if(a[i] == -1){
            dfs(i);
        }
    }
    cout << *max_element(all(h))+1 << endl;
    return 0;
}