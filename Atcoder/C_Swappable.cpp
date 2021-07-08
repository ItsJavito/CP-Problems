#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, ans = 0;
    cin >> n;
    vector<int> arr(n,0);
    for(auto c : arr) {
        cin >> c;
    }

    long count[100000000] = {};

    for(int i = 0; i < n; i++) count[arr[i]]++;
    ans = ((n)*(n-1)/2)- ans;
    cout << ans;
    return 0;
}