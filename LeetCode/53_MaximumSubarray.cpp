#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxSubArray(vector<int>& nums) {
        int current = 0;
        int ans = INT_MIN;
        for(auto &c : nums){
            current = max(c, current + c);
            ans = max(current, ans);
        }
        return ans;
    }
};

int main(){

    Solution *res = new Solution();
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << res->maxSubArray(nums) << endl;
    return 0;
}