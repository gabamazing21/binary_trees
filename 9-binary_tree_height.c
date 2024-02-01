#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int left = binary_tree_height(tree->left);
		int right = binary_tree_height(tree->right);
		return fmax(left, right) + 1;
	}
	
}
