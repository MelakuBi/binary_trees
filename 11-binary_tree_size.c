#include "binary_tree.h"
/**
 * binary_tree_size - function that measures the size of a tree
 * @tree: pointer to the root node of the tree to be measured
 * Return: size of a tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	if (tree != NULL)
	{
		size += 1;
		if (tree->left)
		{
			size += binary_tree_size(tree->left);
		}
		if (tree->right)
		{
			size += binary_tree_size(tree->right);
		}
		return (size);
	}
	else
	{
		return (0);
	}
}

