/*
 Problem A: Travel Restrictions
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
    string I, O;
    int n;
    cin >> n;
    vector<vector<char>> res(n, vector<char>(n,'N'));
    cin >> I >> O;
    for(int b=0;b<n;++b){
        int i = b-1, j = b+1;
        res[b][b] = 'Y';
        while(i>= 0 || j < n)
        {
            if(i >= 0 && I[i] == 'Y' && O[i+1] == 'Y'){
                res[b][i] = 'Y';
                i--;
            }else i = -1;
            if(j < n && I[j] == 'Y' && O[j-1] == 'Y'){
                res[b][j] = 'Y';
                j++;
            }else j = n;
        }
    }
    for(int i = 0; i<n ; i++){
        for(int j=0; j<n; j++){
            cout << res[i][j];
        }
        cout << endl;
    }
}
int main() {

    freopen("travel_restrictions_input.txt", "r", stdin); 
	freopen("travel_restrictions_output.txt", "w", stdout);
    fastio;
    
    int t, n;
    cin >> t;
    n = 1;
    while(t--) {
        cout << "Case #" << n << ":" << endl;
        solution();
        n++;
    }
    return 0;
}