/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(vector<int>&ans, TreeNode* node){
        
        if(node==NULL)
            return;

        ans.push_back(node->val);
        if(node->left)
            dfs(ans,node->left);
        if(node->right)
            dfs(ans,node->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
    
        dfs(ans,root);
        
        return ans;
    }
};
