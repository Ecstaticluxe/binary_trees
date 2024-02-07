#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node
 * Return: number of nodes with at least one child, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else if (!tree->left && !tree->right)

		return (0);

	else
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
