#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

/*
 * binary_tree_insert_left - function to insert node to the left
 * @parent: variable to inicate root node
 * @value: a value to insert in to a new node
 * Return : return node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	left_node = binary_tree_node((parent, value);
			{
			parent->left->parent = left_node;
			left_node->left = parent->left;
			}
			parent_left = left_node;
			return (left_node);
}

