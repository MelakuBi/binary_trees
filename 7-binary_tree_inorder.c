#include <stdio.h>
#include "binary_tree.h"
/**
 * binary_tree_inorder - a function that travers inorder
 * @tree: a pointer to previous node of the to be added
 * @func: a pinter to function call for new nodes
 * Return: dont return anything
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == null || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree-n);
		binary_tree_inorder(tree->right, func);
	}
}
