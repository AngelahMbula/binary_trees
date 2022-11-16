#include "binary_tress.h"
/*
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
