#include "binary_trees.h"
#include <stddef.h>
/**
* binary_tree_height - get the height
* @tree: node to check
* Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	int left = binary_tree_height(tree->left);
	int right = binary_tree_height(tree->right);

	return (fmax(left, right) + 1);
}
