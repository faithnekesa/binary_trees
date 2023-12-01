#include "binary_trees.h"

/**
 * binary_tree_insert_right- Function that inserts a node as the right child
 * of another node in a binary tree
 * @parent: Pointer to the node being inserted as right child
 * @value: Value tfor the the new node
 * Return: NULL if parent is NULL or error occurs
 * Otherwise pointer to the new node
 * Description: If parent has a right-child, new node takes its place and
 * old right child set as right-child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}
