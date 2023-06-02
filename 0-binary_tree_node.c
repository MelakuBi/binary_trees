#include <stdlib.h>
#include "binary_tree.h"
/**
 * binary_tree_node - function to create new (root) node
 * @parent: a pointer to point to parent node of to be created
 * @value: the value of a node which is to be created
 * Return: returns node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	struct node* nNode = malloc(sizeof(struct node));
	  nNode->n = value;
	  nNode->left = NULL;
	  nNode->right = NULL;

	  return (nNODE);
}

