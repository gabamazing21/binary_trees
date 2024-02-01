#include "binary_trees.h"
/**
 * binary_tree_node - create binary node
 * @parent: node parent
 * @value: node value
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
  /*Allocate memory for new node*/
  binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
  
  if (node == NULL)
  	return (NULL);
  /*Assign data to this node*/
  node->parent = parent;
  node->n = value;
  /*Initialize left and */
  /*right children as NULL*/
  node->left = NULL;
  node->right = NULL;
  return (node);
}
