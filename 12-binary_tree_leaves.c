#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

}
