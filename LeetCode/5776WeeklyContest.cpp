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

bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target)
{
    bool res = true;
    vector<vector<int>> mat2(mat);
    int n = mat.size();
    int actual = n-1;
    for (int i = 0; i<n ;i++){
        for(int j = 0; j<n; j++){
            mat2[j][actual] = mat[i][j];
        }
        actual--;
    }    
    int i, j, a;
    fo(a,4){
        res = true;
        fo(i,n){
            fo(j,n){
                if(a%2 == 0)
                {
                    if(mat[i][j] != target[i][j]){
                        res = false;
                        reverse(all(mat));
                        for(int z = 0; z<n; z++) reverse(all(mat[z]));
                    }
                }
                else{
                    if(mat2[i][j] != target[i][j])
                    {
                        res = false;
                        reverse(all(mat2));
                        for(int z = 0; z<n; z++) 
                        {
                            reverse(all(mat2[z]));
                        }
                    }
                }
                if(res == false) break;
            }
            if(res == false ) break;
        }
        if(res == true) return true;
    }
    return false;
}

int main()
{
    fastio;
    vector<vector<int>> mat = {{0,1},{1,1}};
    vector<vector<int>> target = {{1,0},{0,1}};
    bool res = findRotation(mat, target);
    cout << res;
    return 0;
}