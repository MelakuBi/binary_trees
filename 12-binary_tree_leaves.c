#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts leafs of a binary tree
 * @tree:
 * a pointer to the root node 
 * Return: return 0 or return 1
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;
	if (tree != NULL)
{
	if (tree->left == NULL && tree->right == NULL)
	{
		leaf += 1;
	}
	if (tree->left)
	{
		leaf += binary_tree_leaves(tree->left);
	}
	if (tree->right)
	{
		leaf += binary_tree_leaves(tree->right);
	}
	return (leaf);
}
	else
	{
	return (0);
	}
}

