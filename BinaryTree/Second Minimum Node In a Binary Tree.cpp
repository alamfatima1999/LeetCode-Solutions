//Question -> https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/description/


class Solution {
public:

    void Rec(int  min1, int &min2, TreeNode* root, int &flag)
    {
        if(!root)
        {
            return;
        }
        Rec(min1, min2, root->left, flag);
        Rec(min1, min2, root->right, flag);
        if(root->val>min1 && root->val==INT_MAX)
        {
            flag = 1;
        }
        if(root->val<min2 && root->val>min1)
        {
            min2 = root->val;
        }
    }


    int findSecondMinimumValue(TreeNode* root) {
        int flag = 0;
        int min1 = root->val;
        int min2 = INT_MAX;
        Rec(min1, min2, root, flag);
        cout<<INT_MAX<<" ";

        if(min2==INT_MAX && flag==1)
        {
            return min2;
        }

        if(min2==INT_MAX)
        {
            return -1;
        }
        return min2;
    }
};