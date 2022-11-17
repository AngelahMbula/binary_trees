#include "binary_trees.h"
/**
 * binary_tree_depth - meausres the depth of a node
 * @tree: pointer to root node
 * Return: depth of node, otherise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}