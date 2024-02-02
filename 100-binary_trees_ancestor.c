#include "binary_trees.h"
/**
 * binary_trees_ancestor - find the lowest common ancesotr
 * @first: first node
 * @second: second node
 * @root: root node
 * Return: node of lca
 */
binary_tree_t *findLCA(binary_tree_t *root,
const binary_tree_t *first, const binary_tree_t *second);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t  *node;

	if (first == NULL && second == NULL)
		return (NULL);
	node = (binary_tree_t *)(first != NULL ? first : second);
	while (node != NULL && node->parent != NULL)
	{
		node = node->parent;
	}
	return (findLCA(node, first, second));
}
/**
 * findLCA - binary_trees_ancestor helper
 * @root: root node
 * @first: first node
 * @second: second node
 * Return: node of lca
 */
binary_tree_t *findLCA(binary_tree_t *root,
const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *left_lca;
	binary_tree_t *right_lca;

	if (root == first || root == second)
		return (root);
	if (root == NULL)
		return (NULL);
	left_lca = findLCA(root->left, first, second);
	right_lca = findLCA(root->right, first, second);
	if (left_lca && right_lca)
		return (root);
	return ((left_lca != NULL) ? left_lca : right_lca);
}
