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
    TreeNode* root;
    Solution()
    {
        root=NULL;
    }
    void insert(int s)
    {
        if(root==NULL)
        {
            root=new TreeNode(s);
        }
        else
        {
            TreeNode *current=root;
            while(true)
            {
                if(current->val>s)
                {
                    if(current->left==NULL)
                    {
                        current->left=new TreeNode(s);
                        break;
                    }
                    else
                    {
                        current=current->left;
                    }
                }
                else
                {
                    if(current->right==NULL)
                    {
                        current->right=new TreeNode(s);
                        break;
                    }
                    else
                    {
                        current=current->right;
                    }
                }
            }
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       
        for(auto s:preorder)
        {
             insert(s);
        }
        return root;
    }
};
