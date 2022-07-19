// class Solution {
// public:
//     vector<int>A;
//     vector<int> preorderTraversal(TreeNode* root) {
//         stack<TreeNode*>S;
//         if (root == NULL) return A;
//         S.push(root);
//         while (!S.empty()){
//             TreeNode * temp = S.top();
//             A.push_back(temp->val);
//             S.pop();
//             if(temp->left){
//                 preorderTraversal(temp->left);
//             }
//             if(temp->right){
//                 preorderTraversal(temp->right);
//             }
//         }
//     return A;
//     }
// };


class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>A;
        stack<TreeNode*>s;
        s.push(root);
        TreeNode* temp;
        if (root == NULL) return A;
        while (!s.empty()){
            temp = s.top();
                A.push_back(temp->val);
            s.pop();
            if (temp->right){
                s.push(temp->right);
                temp->right = NULL;
            }
            if (temp->left){
                s.push(temp->left);
                temp->left = NULL;
            }
        }
        return A;
    }
};
