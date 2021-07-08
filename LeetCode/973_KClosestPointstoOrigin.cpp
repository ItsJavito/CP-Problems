#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        vector<pair<int, int>> v1;
        int tam = points.size();
        for(int i = 0; i<tam ; ++i)
        {
            int a = points[i][0];
            int b = points[i][1];
            int dist = a*a + b*b; 
            v1.push_back({dist,i});
        }
        sort(v1.begin(), v1.end());
        vector<vector<int>> ans;
        int i = 0;
        while(k--){
            ans.push_back(points[v1[i].second]);
            i++;
        }
        return ans;
    }
};


int main(){

    vector<vector<int>> vec = {{-1,0},{0,1},{1,0},{1,1}};
    Solution *res = new Solution();

    auto ans = res->kClosest(vec , 3);
    for(auto &c : ans){
        for(int i = 0; i < c.size(); ++i){
            cout << c[i] << " ";
        }
        cout << endl; 
    }

}