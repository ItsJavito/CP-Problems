#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    float n;
    cin >> n;

    n = n * 1.08f;

    n = int(n);

    if(n == 206) cout << "so-so";
    else if(n > 206) cout << ":(";
    else cout << "Yay!";

    return 0;
}