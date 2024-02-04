#include "binary_trees.h"
/**
 *binary_tree_balance - that measures the balance factor of a binary tree
 *
 *@tree: is a pointer to the root node of
 *the tree to measure the balance factor
 *
 *Return: If tree is NULL, return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int balance;

if (tree == NULL)
return (0);

balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);
return (balance);
}
