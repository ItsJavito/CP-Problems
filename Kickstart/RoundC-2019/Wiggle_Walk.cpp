/*
Kickstart Round C 2019: https://codingcompetitions.withgoogle.com/kickstart/round/0000000000050ff2/0000000000150aac#problem
*/

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
    int n, r , c , x ,y;
    string s;
    cin >> n >> r >> c >> x >> y;
    cin >> s;
    unordered_map<char, pair<int, int>> dir;
    dir['N'] = {-1, 0};
    dir['S'] = {1, 0};
    dir['W'] = {0,-1};
    dir['E'] = {0, 1};
    unordered_set<int> grid[r+1];
    grid[x].insert(y);
    for(int i=0; i<n; i++){
        int dx = dir[s[i]].F;
        int dy = dir[s[i]].S;
        x += dx;
        y += dy;
        while(grid[x].find(y) != grid[x].end()){
            x += dx;
            y += dy;
        }
        grid[x].insert(y);
    }
    cout << " " << x << " " << y << endl;
}
int main() {

    fastio;
    int t ;
    int n = 1;
    cin >> t;
    while(t--) {
        cout << "Case #" << n++ << ":";
        solution();
    }
    return 0;
}