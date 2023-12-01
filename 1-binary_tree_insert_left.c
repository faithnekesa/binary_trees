#include "binary_trees.h"

/**
 * binary_tree_insert_left -Function that inserts a node as
 * left child to another node in a binary tree
 * @parent: Pointer to the node being inserted to the left
 * @value: Value for the new node
 * Return: NULL if parent is NULL or error occurs
 *         Otherwise return pointer to the new node
 * Description: If parent node already has a left child, new node takes
 *              it's place and old left node is left child of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
