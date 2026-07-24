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
    void help (TreeNode* &l,TreeNode* &r){
        if(l==NULL && r==NULL)return;
        swap(l,r);
        TreeNode* l1=NULL,l2=NULL,r1=NULL,r2=NULL;
        if (l)
            help(l->left, l->right);

        if (r)
            help(r->left, r->right);


      

    }
    TreeNode* invertTree(TreeNode* root) {
        if(root){help(root->left,root->right);}
        return root;
    }
};
