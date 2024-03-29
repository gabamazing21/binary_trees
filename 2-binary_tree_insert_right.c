#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert right
 * @parent: parent node
 * @value: value
 * Return: return new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (parent->right == NULL)
	{
		parent->right = newNode;
	}
	else
	{
		binary_tree_t *temp = parent->right;

		parent->right = newNode;
		parent->right->right = temp;
		if (temp != NULL)
			temp->parent = newNode;
	}
	return (newNode);
}
