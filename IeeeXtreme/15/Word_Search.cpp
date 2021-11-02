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

int dx [] {-1 , -1, -1 , 0 , 0 , 1, 1, 1};
int dy [] {-1 , 0 ,  1 ,-1 , 1 , -1, 0, 1};

int main() {
    fastio;
    int r , q ,c ;
    cin >> r >> q >> c;
    vector<string> g(r);
    vector<string> ar(c);
    for(auto &c : g) cin >> c;
    for(auto &c: ar) cin >> c; 
    
    for(auto &c: ar){
        bool find = false; 
        for(int i = 0; i < r ; i++){
            for(int j = 0; j < q; j++){
                if(c[0] == g[i][j]){
                    if(c.size() == 1){
                        cout << i << " " << j << " " << i << " " << j << endl;
                        find = true;
                    }
                    else 
                    for(int k = 0; k < 8; k++){
                        if(i + dx[k] >= 0 && i + dx[k] < r && j + dy[k] >= 0 && j + dy[k] < q){
                            if(g[i+ dx[k]][j + dy[k]] == c[1]){
                                int posi = i + dx[k] , posj = j + dy[k];
                                if(c.size() == 2){
                                    cout << i << " " << j << " " << posi << " " << posj << endl;
                                    find = true;
                                }
                                else 
                                for(int z = 2; z < c.size(); z++){
                                    posi += dx[k]; posj += dy[k];
                                    if(posi >= 0 && posi < r && posj >= 0 && posj < q){
                                        if(g[posi][posj] != c[z]){
                                            break;
                                        }
                                        if(z == c.size() - 1){
                                            cout << i << " " << j << " " << posi << " " << posj << endl;
                                            find = true;
                                        }
                                    }
                                    if(find) break; 
                                }
                            }
                        }
                        if(find) break; 
                    }
                }
                if(find) break; 
            }
            if(find) break; 
        }
        if(!find){
            cout << -1 << endl; 
        }
    }

    return 0;
}