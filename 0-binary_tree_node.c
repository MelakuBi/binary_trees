#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function to create new (root) node
 * @parent: a pointer to point to parent node of to be created
 * @value: the value of a node which is to be created
 * Return: returns node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		return (new_node);
	}
}
