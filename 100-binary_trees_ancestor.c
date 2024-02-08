#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: NULL if no common ancestor was found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp1 = first;
	const binary_tree_t *temp2 = second;


	while (!=temp1)
{
	temp1 = temp1->parent;
	temp2 = second;

	while (!=temp2)
	{
		if (temp1 == temp2)
		{
		return ((binary_tree_t *)temp1);
		}
		temp2 = temp2->parent;
	}
}
	return (NULL);
}
