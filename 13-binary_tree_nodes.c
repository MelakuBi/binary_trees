#include "binary_tree.h"
/**
 * binary_tree_nodes - function to count nodes
 * @tree: pointer to the root node of a tree
 * Return: number of node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodd = 1;
	size_t rlnodd = 1;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree=>left && tree->right)
	{
		rlnodd += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (rlnodd);
	}
	else if (tree->left)
	{
		nodd += binary_tree_nodes(tree->left);
		return (nodd);
	}
	else if (tree->right)
	{
		nodd += binary_tree_nodes(tree->right);
		return (nodd);
	}
	else
	{
		return (0);
	}
}


