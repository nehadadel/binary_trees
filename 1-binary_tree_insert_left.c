#include "binary_trees.h"
/**
 *binary_tree_insert_left - that inserts a node as the left-child of another node
 *
 *@parent:  is a pointer to the node to insert the left-child in
 *@value: is the value to store in the new node
 *
 *Return: a pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *left_node, *tmp = NULL;
if (parent == NULL)
{
return (NULL); }

left_node = malloc(sizeof(binary_tree_t));
if (left_node == NULL)
{
return (NULL); }

if (parent->left != NULL)
{
tmp = parent->left;
}

left_node->n = value;
left_node->parent = parent;
left_node->left = tmp;
left_node->right = NULL;
parent->left = left_node;

return (left_node);
}
