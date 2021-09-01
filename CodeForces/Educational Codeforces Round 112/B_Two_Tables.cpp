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


void solution() {
    int W, H, x1,x2,y1,y2,w,h, ans1 = INT_MAX, ans2 = INT_MAX;
    cin >> W >> H;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> w >> h;
    int bottom, top, left , right;
    bottom = y1;
    top = H-y2;
    left = x1;
    right = W-x2;
    int dif1 = h - max(bottom,top);
    int dif2 = w - max(right, left);
    if(max(bottom,top) == bottom && y2 + dif1 <= H){
        ans1 = dif1;
    }else if(max(bottom,top) == top && y1 - dif1 >= 0) ans1 = dif1;

    if(max(right, left) == right && x1 - dif1 >= 0){
        ans2 = dif2;
    }else if(max(right, left) == left && x2 + dif2 <= W ){
        ans2 = dif2;
    }
    if(ans1 == INT_MAX && ans2 == INT_MAX){
        cout << -1 << endl;
        return;
    }
    cout << min(ans1, ans2) << endl;
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