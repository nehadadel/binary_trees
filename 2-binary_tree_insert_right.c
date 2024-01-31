#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *
 *@parent: pointer to the node to insert the right-child in
 *@value: value to store in the new node
 *
 *Return: a pointer to the created node,
 *or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *right_node, *tmp = NULL;
if (parent == NULL)
{
return (NULL); }

right_node = malloc(sizeof(binary_tree_t));
if (right_node == NULL)
{
return (NULL); }

if (parent->right != NULL)
{
tmp = parent->right;
tmp->parent = right_node;

}

right_node->n = value;
right_node->parent = parent;
right_node->right = tmp;
right_node->left = NULL;
parent->right = right_node;

return (right_node);
}
