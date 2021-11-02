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
    int n, k , ans = INT_MAX;
    cin >> n >> k; 
    vi ar(n,0);
    for(auto &c: ar) cin >> c; 
    vvi sums(n, vi(n, 0));

    FOR(i,n){
        sums[i][i] = ar[i];
        for(int j = i+1; j < n; j++){
            sums[i][j] = sums[i][j-1] + ar[j];
        }
    }

    FOR(i,n){
        FOR(j,n){
            if(sums[i][j] <= k){
                if(sums[i][k] == k) ans = min(ans, abs(j-i) + 1);
    
                int posI = max(i,j) + 2;
                for(int r = i+2; r < n; r++){
                    for(int z = j+2; z < n ; z++){
                        if(sums[i][j] + sums[r][z] == k){
                            ans = min(ans, abs(j-i) +  1  + abs(r-z) + 1);
                            cout << ans << endl;
                        }
                    }
                }

            }
        }
    }
    if(ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl; 


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