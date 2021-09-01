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
    int k, n, m, p1 = 0 , p2 = 0;
    cin >> k >> n >> m;
    vi pol(n); vi mono(m); vi ar_ans(0);
    for(auto&c: pol) cin >> c;
    for(auto&c: mono) cin >> c;
    while(p1 < pol.size() || p2 < mono.size()){
        if(p1 < pol.size() && p2<mono.size()){
            if(pol[p1] == 0){
                ar_ans.pb(0);
                k++;
                p1++;
            }
            else if(mono[p2] == 0){
                ar_ans.pb(0);
                k++;
                p2++;
            }
            else if(pol[p1] <= k){
                ar_ans.pb(pol[p1]);
                p1++;
            }
            else if(mono[p2] <= k){
                ar_ans.pb(mono[p2]);
                p2++;
            }
            else{
                cout << -1 << endl; return; 
            }
        }
        else if(p1 < pol.size()){
            if(pol[p1] == 0){
                ar_ans.pb(0);
                k++;
                p1++;
            }
            else if(pol[p1] <= k){
                ar_ans.pb(pol[p1]);
                p1++;
            }
            else{
                cout << -1 << endl; return;
            }
        }
        else if(p2 < mono.size()){
            if(mono[p2] == 0){
                ar_ans.pb(0);
                k++;
                p2++;
            }
            else if(mono[p2] <= k){
                ar_ans.pb(mono[p2]);
                p2++;
            }
            else{
                cout << -1 << endl; return;
            }
        }
    }
    for(auto &c : ar_ans) cout << c << " ";
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