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
int n, p , k;
int getCountModSearch(int i){
    int res = 1 + ((n-i-1)/k); 
    return res; 
}

void solution() {
    int ans = 0; 
    cin >> n >> p >> k;
    //mi residuo objetivo, hasta donde quiero llegar a contar 
    int temp = p%k; 
    //le quitamos 1 para hacer los calculos antes de llegar a ese residuo
    temp--;
    //n-1 mod k
    int s = (n-1)%k;
    /*
    Nos damos cuenta que para contar las cantidades días que se demora en un mod
    es (n-1) / k + 1, siempre y cuando n-1 sea divisible entre k, sino tenemos que
    restarle 1 a los elementos que no se repiten al final, es decir se les va a sumar
    (n-1)/k por todos los elementos que no se repetian al final. 

    Ejm: 

    n = 8 , p = 4 , k = 5

    Numeros: 0 1 2 3 4 5 6 7 
    Mod:     0 1 2 3 4 0 1 2

    Nuestra variable s es 2 y nuestro temp es 4, se puede ver que los mod de 0,1,2 se 
    repiten 2 veces es decir (n-1)/k + 1, además cabe resaltar que son 3 mods es decir
    s+1 de mods que se repiten. El resto de mods que solo se están repitiendo 1 vez 
    el 3 y el 4 sería (n-1)/k veces, y son una cantidad de (temp-s) mods. 

    En caso de que el temp sea menor o igual que el s, solamente se multiplica 
    el temp + 1, +1 porque tenemos que contar desde el 0 también, por el ((n-1)/k + 1)
    */
    if(temp > s){ 
        ans += (s+1)*((n-1)/k + 1) + (temp-s)*((n-1)/k);
    }else{
        ans += ((n-1)/k + 1) * (temp+1);
    }
    for(int i = temp+1; i < n ; i+=k){
        ans++;
        if(i == p)break;
    }
    cout << ans << endl;
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