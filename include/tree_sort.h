#include "pch.h"
#pragma once
#include <iostream>

struct Node
{
	int field;
	Node *left;
	Node *right;
};

// output of tree nodes(traversal in infix form)
void print(Node *Tree);

// adding nodes to a tree
Node * addnode(int data, Node *Tree);

// free tree memory
void free(Node *Tree);


/// to call	-->	put it in	main.cpp

/*Node *root = nullptr;
	int nod;            // node value
	for (int i = 0; i < sizeOfArray; i++)
	{
		std::cin >> nod;
		root = addnode(nod, root); // place the entered node on the tree
	}
	print(root);
	free(root);	*/