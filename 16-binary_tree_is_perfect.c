#include "binary_trees.h"
int binary_is_perfect_helper(const binary_tree_t *tree, int d, int level);
int depth(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - check if it's perfect
 * @tree: node to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

	return (binary_is_perfect_helper(tree, d, 0));
}
/**
 * binary_is_perfect_helper - helper function
 * @tree: node to check
 * @d: depth
 * @level: level
 * Return: 0 or 1
 */
int binary_is_perfect_helper(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return ((d == level + 1) ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (binary_is_perfect_helper(tree->left, d, level + 1) &&
			binary_is_perfect_helper(tree->right, d, level + 1));
}
/**
* depth - get depth
* @tree: tree node
* Return: depth
*/
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}
