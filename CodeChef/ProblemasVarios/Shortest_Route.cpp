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


void solution(int n, int m, vector<int> &a, vector<int> &b) 
{
    for(int i = 0; i<m; i++){
        int dst = b[i];
        for(int j = 0; i<n; j++){
            if(dst == j){
                cout << (j-1) << " ";
                break;
            }
            if(b[j] == 2){
                cout << -1 << " ";
            }
        }
    }
}

int main() {

    fastio;
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vi a(n,0);
        vi b(m,0);
        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<m; i++) cin >> b[i];
        solution(n,m,a,b);
        cout << endl;
    }
    return 0;
}