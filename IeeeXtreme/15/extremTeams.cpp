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
    ll n , m, ans = 0; cin >> n >> m;
    vector<string> ar (n);
    vvi li (n); 
    string res = "";
    for(auto &c: ar) cin >> c ; 

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(ar[i][j] == 'n'){
                li[i].push_back(j);
            }
        }
    }
    
    for(int i = 0 ; i < m ; i++){
        res += 'y';
    }

    for(int i = 0; i < n; i++){
        if(ar[i]== res){
            ans += (n-i-1) * (n-i-2)/2;
            continue;
        }

        string temp = ar[i];

        for(int j = i + 1; j < n; j++)
        {
            for(auto &c: li[i]){
                if(ar[j][c] == 'y'){
                    temp[c] = 'y';
                }
            }
            string temp1 = temp; 

            if(temp1 == res){
                ans += n - j - 1; 
                temp = ar[i];
                continue; 
            }

            for(int z = j + 1; z < n ; z++)
            {
                for(auto &c: li[i]){
                    if(ar[z][c] == 'y'){
                        temp1[c] = 'y';
                    }
                }
                if(temp1 == res) ans++;
                temp1 = temp; 
            }
            temp = ar[i];
        }
    }
    cout << ans << endl; 
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