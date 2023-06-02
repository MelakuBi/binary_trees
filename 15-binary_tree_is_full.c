#include "binary_trees.h"
/**
 * binary_tree_is_full - check and return if tree is full
 * @tree: its a poihter to the root of the tree
 * Return: 1 if tree is full, 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree-right));
	}
	else
	{
		return (0);
	}
}
