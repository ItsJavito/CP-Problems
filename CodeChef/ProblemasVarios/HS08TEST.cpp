#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int x;
    float y;
    cin >> x;
    cin >> y;
    if(x%5 != 0 || x+0.5f > y) printf("%.2f",y);
    else
    {
        y = y-x-0.5f;
        printf("%.2f",y);
    }
    return 0;
}