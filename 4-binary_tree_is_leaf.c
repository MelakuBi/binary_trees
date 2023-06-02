#include "binary_tree.h"
/**
 * binary_tree_is_leaf - a function to check leaf
 * @node: a pointer to node 
 * Return: return 1 on success
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
		}
	else
	{
		if (node->left ==NULL && node->right == NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
