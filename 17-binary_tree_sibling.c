#include "binary_trees.h"
/**
 * binary_tree_sibling - function to find the sibling of a node
 * @node: is pointer to nodes
 * Return: return pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node-parnt == NULL)
	{
		return (0);
	}
	if (node->parent && node == node->parent->left)
	{
		return (node->parent->right)
	}
	else
	{
		return (node->parent->left)
	}
}

