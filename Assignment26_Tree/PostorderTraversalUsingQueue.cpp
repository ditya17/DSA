class Solution {
public:
    vector<int>A;
    vector<int> postorderTraversal(TreeNode* root) {
        queue<TreeNode*>q;
        if (root == NULL) return A;  
        q.push(root);
        
        while(!q.empty()){
            TreeNode* temp = q.front();
            if (temp->left){
                postorderTraversal(temp->left);
            }
             if (temp->right){
                postorderTraversal(temp->right);
            }
            A.push_back(temp->val);
            q.pop();
        }
        return A;
    }
};
