#include "binary_trees.h"
#include <stddef.h>
/**
* binary_tree_height - get the height
* @tree: node to check
* Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree)
	{
		left = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
		right = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;
		return ((left > right) ? left : right);
	}
	return (0);
}
