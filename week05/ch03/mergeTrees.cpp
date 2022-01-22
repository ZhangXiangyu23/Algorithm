#include <stdio.h>
#include <stdlib.h>



struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};



struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2)
{
	if(root1==NULL)
	{
		return root2;	
	}	
	if(root2==NULL)
	{
		return root1;
	}
	
	struct TreeNode* NewTree=(struct TreeNode*)malloc(sizeof(struct TreeNode));
	NewTree->val=root1->val+root2->val;
	NewTree->left=mergeTrees(root1->left,root2->left);
	NewTree->right=mergeTrees(root1->right,root2->right);
	return NewTree;
}
