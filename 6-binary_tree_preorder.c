#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through binary tree using preorder transversal
 * @tree: pointer to root node
 * @func: pointer to a function to call each node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
