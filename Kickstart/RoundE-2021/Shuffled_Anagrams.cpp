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
    string word , ans;
    cin >> word;
    unordered_map<char, int> map;
    for(char c : word){
        map[c]++;
        if(map[c] > word.size()/2){
            cout << "IMPOSSIBLE" << endl;
            return; 
        }
    }
    ans = word;
    shuffle(all(ans), default_random_engine());
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] == word[i]){
            for(int j = 0; j < ans.size(); j++){
                if(ans[i] != ans[j] && ans[i] != word[j] && ans[j] != word[i]){
                    swap(ans[i], ans[j]);
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}
int main() {
    fastio;
    int t, n = 1;
    cin >> t;
    while(t--) {
        cout << "Case #" << n++ << ": "; 
        solution();
    }
    return 0;
}