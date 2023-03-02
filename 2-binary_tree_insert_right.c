#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inesrt a node as the right-child
 * of another in a binary tree
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: If parent is NULL or an error occurs - NULL
 * Otherwise - a pointer to the new node
 *
 * Description: If parents already has a right-child, the node takes
 * its place and the old right-child is set as the right-child of new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = paent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}