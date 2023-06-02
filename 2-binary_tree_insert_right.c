#include "binary_trees.h"
/*
 * binary_tree_insert_right - function that inserts new node to right
 * @parent: a pointer to a node which is accept new node
 * @value: a value to the new node
 * Return: return a node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

right_node = binary_tree_node(parent, value);
if (parent->right != NULL)
{
	parent->right->parent = right_node;
	right_node->right = parent->right;
}
parent-right = right_node;
return (right_node);
}
