#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

vector<int> breakingRecords(vector<int> &scores) 
{
    int maxi = scores[0];
    int mini = scores[0];
    vector<int> ans(2,0);
    cout << endl;
    for (int i = 1; i < scores.size(); i++)
    {
        if(max(scores[i], maxi) > maxi){
            maxi = max(scores[i], maxi);
            ans[0]++;
        }
        if (min(scores[i], mini) < mini){
            mini = min(scores[i], mini);
            ans[1]++;
        }
    }
    return ans;
}


int main()
{
    fastio;
    vector<int> scores;
    int n; 
    cin >> n;
    for(int i = 0; i<n ; i++){
        int value;
        cin >> value;
        scores.push_back(value);
    }
    vector<int> res = breakingRecords(scores);
    for (int i = 0; i < 2; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;   
    return 0;
}