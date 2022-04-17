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

double euclideanDist(double x1, double y1 , double x2 , double y2){
    double res = 0.0;
    res = sqrt(pow(abs(x1 - x2) , 2) + pow(abs(y1 - y2) , 2));
    return res; 
}

int main() {
    fastio;
    vector<double> kari(4,0); 
    vector<double> ola(4,0);
    double dx_kari , dx_ola, dy_kari , dy_ola;
    double res = 0; 
    cin >> kari[0] >>  kari[1] >> ola[0] >> ola[1] >> kari[2] >> kari[3] >> ola[2] >> ola[3];
    dx_kari = abs(kari[0] - kari[2]) / 100000; 
    dy_kari = abs(kari[1] - kari[3]) / 100000; 
    dx_ola = abs(ola[0] - ola[2]) / 100000;
    dy_ola = abs(ola[1] - ola[3]) / 100000;
    for(int i = 0 ; i <= 100000 ; i++){
        res = max(res, euclideanDist(kari[0]+dx_kari*i, kari[1]+dy_kari*i , ola[0]+dx_ola*i , ola[1] + dy_ola*i));
    }
    cout << setprecision(11) << res  << endl; 
    return 0;
}