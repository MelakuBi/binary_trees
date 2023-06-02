#include <stdio.h>
#include "binary_trees.h"
/**
 *  binary_tree_postorder - function that traverse post order
 *  @tree: its a pointer to each node
 *  @func: is a pointer fuction which calls each node
 *  Return: dont return
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
	if (tree == NULL || func == NULL)
{
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
