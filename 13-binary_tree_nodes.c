#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with atleast 1child
 * @tree: pointer to root node
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		nodes += binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
	}
	return (nodes);
}
