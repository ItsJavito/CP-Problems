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

    int N; cin >> N;
    vi ans(N , 0) ;
    vpii ar (N) ;
    vector <int> vis (N , 0);
    for(auto &c : ar)  cin >> c.first >> c.second;
    
    for(int i = 0; i < N ; i++){
        for(int j = 0; j < N ; j++){
            if(ar[j].S - ar[j].F == i && vis[j] == 0)
            {
                bool temp = true;
                for(int k = ar[j].F; k <= ar[j].S; k++){
                    if(ans[k-1] == 0){
                        ans[k-1] = j+1;
                        temp = false;
                        vis[j] = 1; 
                        break; 
                    }
                }
                if(temp){
                    cout << "impossible" << endl;
                    return; 
                }
            }
        }
    }
    for(auto &c : ans){
        cout << c << " ";
    }
    cout << endl;
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