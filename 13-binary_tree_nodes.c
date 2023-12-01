#include "binary_trees.h"

/**
 * binary_tree_nodes -Function that counts nodes with at least one
 * child in a binary tree
 * @tree:Pointer to the root node of the binary tree whose child nodes
 * are being counted
 * Return:0 if tree is NULL else return node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
