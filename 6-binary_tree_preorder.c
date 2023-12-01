#include "binary_trees.h"

/**
 * binary_tree_preorder -A function that traverses through a binary tree
 * using pre-order traversal
 * @tree: Pointer to the root node of the binary tree traversed
 * @func: Pointer to a function being called for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
