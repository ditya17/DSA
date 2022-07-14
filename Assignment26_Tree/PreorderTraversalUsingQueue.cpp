class Solution {
public:
    vector<int>A;
    vector<int> preorderTraversal(TreeNode* root) {
        queue<TreeNode*>Q;
        if (root == NULL) return A;
        Q.push(root);
        while (!Q.empty()){
            TreeNode * temp = Q.front();
            A.push_back(temp->val);
            Q.pop();
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
