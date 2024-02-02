#include "binary_trees.h"
/**
* binary_tree_balance - balance factor
* @tree: node to check
* Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l, bf;

	if (tree == NULL)
		return (0);
	l = (int)(binary_tree_height(tree->left));
	r = (int)(binary_tree_height(tree->right));
	bf = l - r;
	return (bf);
}
/**
* binary_tree_height - get the height
* @tree: node to check
* Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{


	if (tree)
	{
		size_t left = 0, right = 0;

		left = (tree->left) ? (1 + binary_tree_height(tree->left)) : 1;
		right = (tree->right) ? (1 + binary_tree_height(tree->right)) : 1;
		return ((left > right) ? left : right);
	}
	return (0);
}
