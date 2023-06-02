#include <stdio.h>
#include "binary_tree.h"
/**
 * binary_tree_depth - function that measures the 
 * depth of a tree in binary tree
 * @tree: a pointer to nods
 * Return: Depth of a tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
	if (tree->parent)
	{
		depth = binary_tree_depth(tree->parent);
		depth += 1;
	}
	return (depth);
	}
}
