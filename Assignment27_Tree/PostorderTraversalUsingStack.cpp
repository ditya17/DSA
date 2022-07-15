class Solution {
public:
    vector<int>A;
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>S;
        if (root == NULL) return A;  
        S.push(root);
        
        while(!S.empty()){
            TreeNode* temp = S.top();
            if (temp->left){
                postorderTraversal(temp->left);
            }
             if (temp->right){
                postorderTraversal(temp->right);
            }
            A.push_back(temp->val);
            S.pop();
        }
        return A;
    }
};
