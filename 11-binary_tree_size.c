#include "binary_trees.h"
/**
 * binary_tree_size - meausres size of binary tree
 * @tree: pointer to root node
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		size += binary_tree_size(tree->left);
		size += 1;
		size += binary_tree_size(tree->right);
	}
	return (size);
}
