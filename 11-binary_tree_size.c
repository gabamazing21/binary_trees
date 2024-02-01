#include "binary_trees.h"
/**
* binary_tree_size - get size of tree
* @tree: root
* Return: tree size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
	{	return (0);
	}
	else
	{
		l = (binary_tree_size(tree->left));
		r = (binary_tree_size(tree->right));
		return (1 + r + l);
	}
}
