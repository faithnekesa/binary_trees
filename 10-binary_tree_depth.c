#include "binary_trees.h"

/**
 * binary_tree_depth -Function that measures binary tree node depth
 * @tree: Pointer to the node whose depth is being measured
 * Return: 0 If tree is NULL else return the node depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
