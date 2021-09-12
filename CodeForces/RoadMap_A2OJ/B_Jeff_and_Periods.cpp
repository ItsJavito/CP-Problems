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
    fastio;                  //lp , dif , firstTime
    map<int, pair<int, int>> map;
    vector<bool> notx(1e5);
    int n; cin >> n;
    FOR(i , n){
        int lp, dif;
        int num; cin >> num;
        if(notx[num]) continue;
        //si no está en el map
        if(map.find(num) == map.end()) {map[num] = {i, 0 }; continue;};

        lp = map[num].F; dif = map[num].S;
        //si el dif es 0 y se encontró otra ocurrencia
        if(dif == 0){
            dif = i - lp;
            map[num] = {i , dif };
            continue;
        }
        else if(dif != i-lp){
            map.erase(num);
            notx[num] = true;
        }else if(dif == i - lp){
            map[num] = {i, dif };
        }
    }
    cout << map.size() << endl;
    for( auto &c : map){
        cout << c.first << " " << c.S.S<< endl;
    }

    return 0;
}