#include "binary_trees.h"
#include <stdnoreturn.h>
/**
 * binary_tree_insert_left - insert left
 * @parent: parent node
 * @value: value
 * Return: return new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (parent->left == NULL)
	{
		parent->left = newNode;
	}
	else
	{
		binary_tree_t *temp = parent->left;

		parent->left = newNode;
		newNode->left = temp;
		temp->parent = newNode;
	}
	return (newNode);
}
