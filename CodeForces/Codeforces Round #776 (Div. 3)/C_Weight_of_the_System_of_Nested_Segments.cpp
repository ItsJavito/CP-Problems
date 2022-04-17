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

struct Point{
    int w;
    int x;
    int pos; 
    Point(int _w, int _x , int _pos){
        w = _w;
        x = _x;
        pos = _pos;
    }
};

void solution() {
    int n, m , sum = 0; 
    vector<Point*> ar;
    cin >> n >> m;
    for(int i = 1; i <= m ; i++){
        int w , x;
        cin >> x >> w; 
        ar.pb(new Point(w, x , i));
    }
    sort(ar.begin(), ar.end() , [] (const Point* a, const Point* b){return (a->w < b->w);});
    for(int i = 0; i < m; i++){
        if(i < 2*n ){
            sum += ar[i]->w;
        }else
            ar.pop_back();
    }
    sort(ar.begin() , ar.end() , [] (const Point* a, const Point* b){return a->x < b->x;});
    cout << sum << endl;
    for(int i = 0; i < n; i++){
        cout << ar[i]->pos << " " << ar[2*n-i-1]->pos << endl;
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