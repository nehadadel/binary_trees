#include "binary_trees.h"
/**
 *max - calculate max number
 *
 *@a: number
 *@b: number
 *
 *Return: return max number
*/
int max(int a, int b)
{
if (a <= b)
return (b);
else
return (a);
}
/**
 *binary_tree_height - that measures the height of a binary tree
 *
 *@tree:is a pointer to the root node of the tree to measure the height.
 *
 *Return: your function must return 0, if tree == NULL
*/
int _binary_tree_height(const binary_tree_t *tree)
{
int height = 0, left_height, right_height;

if (tree == NULL)
return (-1);

if (tree->left == NULL && tree->right == NULL)
return (0);

left_height = _binary_tree_height(tree->left);
right_height = _binary_tree_height(tree->right);

height = 1 +  max(left_height, right_height);
return (height);
}
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

balance = (_binary_tree_height(tree->left)) - (_binary_tree_height(tree->right));
return (balance);
}
