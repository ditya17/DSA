class Solution {
public:
    vector<int>A;
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>S;
        if (root == NULL) return A;
        S.push(root);
        while (!S.empty()){
            TreeNode * temp = S.top();
            A.push_back(temp->val);
            S.pop();
            if(temp->left){
                preorderTraversal(temp->left);
            }
            if(temp->right){
                preorderTraversal(temp->right);
            }
        }
    return A;
    }
};
