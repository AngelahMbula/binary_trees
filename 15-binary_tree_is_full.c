#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root node
 * Return: 1 if binary tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int fll = 0, fll2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		fll = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		fll2 = binary_tree_is_full(tree->right);
	return (fll && fll2);
}
