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
 
int main() {
    fastio;
    int t, ans = 0;
    cin >> t ;
    vpii ar(t);
    for(auto &c : ar){
        cin >> c.first >> c.second;
    }
    bool isSP[4] = {true ,true , true , true};

    for(int i = 0; i < t ; i++){
        int cont = 0;
        for(int j = 0; j < t; ++j){
            if(ar[i].first == ar[j].first){
                if(ar[i].second > ar[j].second && isSP[0]){
                    isSP[0] = false; 
                    cont++;
                }
                else if(ar[i].second < ar[j].second && isSP[1]){
                    isSP[1] = false;
                    cont++;
                }
            }
            else if(ar[i].second == ar[j].second){
                if(ar[i].first > ar[j].first && isSP[2]){
                    isSP[2] = false;
                    cont++;
                }
                else if(ar[i].first < ar[j].first && isSP[3]){
                    isSP[3] = false;
                    cont++;
                }
            }
        }
        if(cont == 4){
            ans++;
        }
        for(int j = 0; j < 4 ; j++) isSP[j] = true;
        cont = 0;
    }
    cout << ans << endl;
    return 0;
}