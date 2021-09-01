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

int main() {
    fastio;
    int n, m , min = 0 , max = 0; cin >> n >> m;
    priority_queue<int> pq;
    priority_queue<int , vi , greater<int>> min_pq;
    FOR(i , m){
        int num; cin >> num;
        pq.push(num);
        min_pq.push(num);
    }

    FOR(i, n){
        int a , b;
        a = min_pq.top();min_pq.pop();
        min += a--;
        if(a > 0) min_pq.push(a);

        b = pq.top(); pq.pop();
        max += b--;
        if(b > 0)pq.push(b);
    }
    cout << max << " " << min << endl;
    return 0;
}