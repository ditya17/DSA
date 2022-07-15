class Solution {
public:
    vector<int>A;
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>S; 
        if (root == NULL) return A;
         S.push(root);
        while(!S.empty()){
            TreeNode* temp = S.top();
            if (temp->left){
                inorderTraversal(temp->left);
            }
            A.push_back(temp->val);
            if (temp->right){
                inorderTraversal(temp->right);
            }
            S.pop();
        }
        return A;
    }
};
