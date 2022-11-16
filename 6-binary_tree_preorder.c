#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through the binary tree using preorder transversal
 * @tree: pointer to root node
 * @func: pointer to a function to call each node
 * Return: void
 */
void binary_tree_preorder(binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
