#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string minimizeResult(string s){
        int pos = s.find('+');
        string res = "(" + s + ")";
        int min = stoi(s.substr(0,pos)) + stoi(s.substr(pos, s.size()- pos));
        for(int i = 1; i < s.size(); i++){
            int l = pos - i , r = pos + i; 
            for(int j = 1; pos + j < s.size() && l >= 0; j++){
                int ml = s.substr(0, l) == "" ? 1:stoi(s.substr(0, l));
                int mr = s.substr(pos + j + 1) == "" ? 1:stoi(s.substr(pos + j + 1));
                int sl = stoi(s.substr(l, i));
                int sr  = stoi(s.substr(pos + 1, j));
                int operation = ml * (sl + sr) * mr;
                if(operation < min){
                    min = operation;
                    res = s.substr(0, l) + "("+ s.substr(l, i)+ "+" +s.substr(pos + 1, j) +")"+ s.substr(pos + j + 1);
                }
            }
        }
        return res; 
    }
};

int main(){

    Solution *res = new Solution();
    cout << res->minimizeResult("12+34");
    return 0;
}   