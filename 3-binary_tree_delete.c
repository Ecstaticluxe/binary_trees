#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a ponter to the node of the tree
 * Description: if tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)

		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
