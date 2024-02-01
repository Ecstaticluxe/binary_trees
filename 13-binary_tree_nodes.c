#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node
 * Description:If tree is NULL, the function must return 0
 * ---A NULL pointer is not a node
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t count = 0;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	if (!=tree->left || !=tree->right)
	        count++;

    return (count);
}
