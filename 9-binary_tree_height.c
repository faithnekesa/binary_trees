#include "binary_trees.h"

/**
 * binary_tree_height -Function that measures beinary tree height
 * @tree: Pointer to the root node of the tree whose
 * height is being measured
 * Return:0 If tree is NULL else return tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
