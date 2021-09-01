#include <bits/stdc++.h>
using namespace std;

class Solution{
    public: 	
       bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> dp(n+1 , false);
        dp[0] = true;
        for(int i = 1; i <= n ; ++i){
            for(int j = 0; j < i ; ++j){
                string str = s.substr(j,  i - j);
                if(find(wordDict.begin() , wordDict.end() , str) != wordDict.end() && dp[j])
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        for(auto &c : s) cout << c << " " ; cout << endl;
        for(int i=0 ; i <= n; ++i)  cout << dp[i] << " ";
        cout << endl;
        return dp[n];
    }
};

int main(){

    Solution *res = new Solution();
    string word = "applepenapple";
    vector<string> words = {"apple","pen"};
    cout << res->wordBreak(word, words) << endl;
    return 0;
}