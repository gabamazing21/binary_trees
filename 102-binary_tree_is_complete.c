#include "binary_trees.h"
unsigned int count_node(const binary_tree_t *tree);
int is_complete_helper(const binary_tree_t *tree,
	unsigned int index, unsigned int number_nodes);

/**
* binary_tree_is_complete - check complete binary tree
* @tree: root node
* Return: number of node
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	return (is_complete_helper(tree, 0, count_node(tree)));
}
/**
* is_complete_helper - binary_tree_is_complete function helper
* @tree: root node
* @index: index
* @number_nodes: number of node
* Return: number of node
*/
int is_complete_helper(const binary_tree_t *tree,
		unsigned int index, unsigned int number_nodes)
{
	if (tree == NULL)
		return (1);
	if (index >= number_nodes)
		return (0);

	return (is_complete_helper(tree->left, 2 * index + 1, number_nodes) &&
			is_complete_helper(tree->right, 2 * index + 2, number_nodes));
}

/**
* count_node - count number of node
* @tree: root node
* Return: number of node
*/
unsigned int count_node(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + count_node(tree->left) + count_node(tree->right));
}
