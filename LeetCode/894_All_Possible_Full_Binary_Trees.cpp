#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{
    public:
    unordered_map<int, vector<TreeNode*>> ans;
    int it = 1;
    vector<TreeNode*> allPossibleFBT(int n){
        ans[0].push_back(new TreeNode(1));
        for(; it<= (n-1)/2 ; ++it){
            for(int i=0; i< ans[it-1].size(); ++i){
                solve(ans[it-1][i] , ans[it-1][i]);
            }
        }
        return ans[(n-1)/2];
    }
    void solve(TreeNode* ptr, TreeNode* parent){
        if(ptr == nullptr) return;

        solve(ptr->left, parent);
        if(ptr->left == nullptr && ptr->right == nullptr){
            ptr->left = new TreeNode(1);
            ptr->right = new TreeNode(1);
            ans[it].push_back(cloneTree(parent));
            ptr->left = nullptr;
            ptr->right = nullptr;
        }
        solve(ptr->right, parent);
    }
    void inOrder(TreeNode* root){
        if(root == nullptr) return;
        inOrder(root->left);
        cout << root->val << " ";
        inOrder(root->right);
    }
    TreeNode* cloneTree(TreeNode* root){
        if(root == nullptr)
            return root;
        TreeNode* new_root = new TreeNode(1);
        new_root->left = cloneTree(root->left);
        new_root->right = cloneTree(root->right);
        return new_root;
    }
};
void inOrder(TreeNode* root){
    if(root == nullptr) {
        return;
    }
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

int main(){

    Solution *res = new Solution();
    vector<TreeNode*> ans = res->allPossibleFBT(5);
    for(auto &c : ans){
        inOrder(c);
        cout << endl;
    }
    return 0;
}