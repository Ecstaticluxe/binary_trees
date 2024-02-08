#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL, 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int height;

    if (!tree)
        return (0);

    height = binary_tree_height(tree);
    nodes = (1 << height) - 1;

    return (tree);
}
