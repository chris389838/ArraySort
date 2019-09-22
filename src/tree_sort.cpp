#include "pch.h"
#include "tree_sort.h"


void print(Node *Tree)
{
	if (Tree != NULL) {      
		print(Tree->left);
		std::cout << Tree->field << " ";
		print(Tree->right);
	}
}

Node * addnode(int data, Node *Tree) {
	if (Tree == NULL)     // if there is no tree, then form the root
	{
		Tree = new Node;	// node memory
		Tree->field = data;	// data field
		Tree->left = NULL;
		Tree->right = NULL; // initialize the branches with a void
	}
	else    
		if (data < Tree->field)   // if the element is less than the root, we go to the left
			Tree->left = addnode(data, Tree->left); // add an element recursively
		else  // otherwise go right
			Tree->right = addnode(data, Tree->right); // add an element recursively
	return(Tree);
}

void free(Node *Tree)
{
	if (Tree != NULL)    // if the tree is not empty
	{
		free(Tree->left);   // recursively delete the left branch
		free(Tree->right);  // recursively delete the right branch
		delete Tree;        // remove the root
	}
}