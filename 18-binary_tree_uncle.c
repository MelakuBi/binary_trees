#include "binary_tree.h"
/**
 * binary_tree_uncle - uncle
 * @node: pointer to nodes
 * Return: pointer to ncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent && ode->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node-parent-parent-left);
	}
}
