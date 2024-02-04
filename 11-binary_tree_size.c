#include "binary_trees.h"
/**
 *binary_tree_size -  that measures the size of a binary tree
 *
 *@tree:  is a pointer to the root node of the tree to measure the size
 *
 *Return: size of tree, If tree is NULL, the function must return 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

return (size);
}
