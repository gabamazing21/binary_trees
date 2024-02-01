#include "binary_trees.h"
#include <stddef.h>
/**
* binary_tree_height - get the height
* @tree: node to check
* Return: height
*/
int height_helper(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t result;

	if (tree == NULL)
		return (0);
	result = height_helper(tree);

	return (result);
}
/**
* height_helper - helper function
* @tree: node to check
* Return: return result
*/
int height_helper(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (-1);
	}
	else
	{
		left = height_helper(tree->left);
		right = height_helper(tree->right);

		return (fmax(left, right) + 1);
	}
}
