#include "binary_trees.h"

/**
 * binary_trees_ancestor -Function that finds the lowest common
 * ancestor of two nodes in a binary tree
 * @first: Pointer to the first node in the binary tree
 * @second: Pointer to the second node in the binary tree
 * Return: NULL if no common ancestors else return common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mom, *pop;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mom = first->parent, pop = second->parent;
	if (first == pop || !mom || (!mom->parent && pop))
		return (binary_trees_ancestor(first, pop));
	else if (mom == second || !pop || (!pop->parent && mom))
		return (binary_trees_ancestor(mom, second));
	return (binary_trees_ancestor(mom, pop));
}
