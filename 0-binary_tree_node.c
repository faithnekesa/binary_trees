#include "binary_trees.h"

/**
 * binary_tree_node -Function that creates a binary tree
 * @parent: Pointer to the parent binary tree noded being created
 * @value: Value for the new node
 * Return: NULL if error occurs and pointer the new node if otherwise
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
