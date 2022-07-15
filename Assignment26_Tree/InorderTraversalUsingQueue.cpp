class Solution {
public:
    vector<int>A;
    vector<int> inorderTraversal(TreeNode* root) {
        queue<TreeNode*>Q; 
        if (root == NULL) return A;
         Q.push(root);
        while(!Q.empty()){
            TreeNode* temp = Q.front();
            if (temp->left){
                inorderTraversal(temp->left);
            }
            A.push_back(temp->val);
            if (temp->right){
                inorderTraversal(temp->right);
            }
            Q.pop();
        }
        return A;
    }
};
