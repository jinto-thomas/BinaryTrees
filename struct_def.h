#include <stdio.h>
#include <stdlib.h>


struct node {
		int data;
		struct node *left;
		struct node *right;
};

void printtree(struct node *p)
{
		if (p != 0) {
				printtree(p->left);
				printf("%d ",p->data);
				printtree(p->right);
		}
}

static int lookup (struct node *node, int target)
{
		if (node == NULL)
				return 0;
		else {
				if (target == node->data) return 1;
				else {
						if (target < node->data)
								return lookup(node->left, target);
						else
								return lookup(node->right, target);
				}
		}
}

struct node *NewNode (int data)
{
		struct node *node = malloc(sizeof(struct node));
		node->data = data;
		node->left = 0;
		node->right = 0;

		return node;
}

struct node *insert (struct node *node , int data)
{
		if (node == 0)
				return NewNode(data);
		else {
				if (data <= node->data)
						node->left = insert(node->left, data);
				else
						node->right = insert(node->right, data);
		}
}



struct node *Build123_b(void)
{
		struct node *root = 0;

		root = NewNode(5);
		root->left = NewNode(2);
		root->right = NewNode(7);
		root->left->left = NewNode(1);
		root->left->right = NewNode(6);
		root->right->left = NewNode(9);
		root->right->right = NewNode(4);
		return root;
}


struct node *Build123_bst(void)
{
		struct node *root = 0;

		root = NewNode(5);
		root->left = NewNode(2);
		root->right = NewNode(7);
		root->left->left = NewNode(1);
		root->left->right = NewNode(9);
		root->right->left = NewNode(6);
		root->right->right = NewNode(8);
		return root;
}

struct node *Build123_a(void)
{
		struct node *root = NewNode(2);
		struct node *l = NewNode(1);
		struct node *r = NewNode(3);

		root->left = l;
		root->right = r;
}



