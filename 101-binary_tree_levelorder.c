#include "binary_trees.h"
void traverselevelorder(const binary_tree_t *tree,
int level, void (*func)(int));

/**
* binary_tree_levelorder - traverse level order
* @tree: root node
* @func: point to function
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, h;

	h = binary_tree_height(tree) + 1;
	for (i = 1; i <= h; i++)
		traverselevelorder(tree, i, func);
}
/**
* traverselevelorder - binary_tree_levelorder help function
* @tree: root node
* @tree: level
* @func: point to function
* @level: level
*/
void traverselevelorder(const binary_tree_t *tree,
int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
	{
		func(tree->n);
	}
	else if (level > 1)
	{
		traverselevelorder(tree->left, level - 1, func);
		traverselevelorder(tree->right, level - 1, func);
	}

}

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
