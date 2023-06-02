#include "binary_tree.h"
#include <stdio.h>
#include "binary_trees.h"
/**
 * @binary_tree_height - function that identify the height of a node
 * @tree: a pointer to the previous node of a tree
 * Return: Height of a tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t height_left = 0;
        size_t height_right = 0;
        if (tree == NULL)
        {
                return (0);
        }
        else
        {
                if (tree->left)
                {
                        height_left = 1 + binary_tree_height(tree->left);
                }
                if (tree->right)
                {
                        height_right = 1 + binary_tree_height(tree->right);
                }
                if (height_left > height_right)
                {
                        return (height_left);
                }
                else
			{
                        return (height_right);
                }
        }
/**
 * binary_tree_height - function that measures the height of a tree
 * @tree: a pointer to the root node of atree
 * Return: height of a tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		left = 1;
		left += binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		Hright = 1;
		Hright += binary_tree_height(tree->right);
	}
	return (Hleft - Hright);
}
