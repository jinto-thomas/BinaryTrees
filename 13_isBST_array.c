#include "struct_def.h"

int max(int a, int b, int c)
{
		if (a > b && a > c )
				return a;
		else if (b > a && b > c)
				return b;
		else if (c > a && c > b)
				return c;
}

int min (int a, int b, int c)
{
		if (a < b && a < c)
				return a;
		else if (b < a && b < c)
				return b;
		else if (c < a && c < b)
				return c;
}

int minVal (struct node *node )
{
		if (node->left == 0 && node->right == 0) {	
				return node->data;			
		}
		else {
				return min(node->data,minVal(node->left),minVal(node->right));
		}
}

int maxVal(struct node *node)
{
		if (node->left == 0 && node->right == 0)
				return node->data;
		else
				return max(node->data,maxVal(node->left),maxVal(node->right));
}


int is_min(struct node *node)
{
		while (node != 0)
				node = node->left;
		return node->data;
}

int is_max(struct node *node)
{
		while (node != 0)
				node = node->right;
		return node->data;
}

int isBST (struct node *node)
{
		if (node == 0)
				return 1;
		if (node->left != 0 && node->data < minVal(node->left))
				return 0;
		if (node->right != 0 && node->data >= maxVal(node->right))
				return 0;
		if (!isBST(node->left) || !isBST(node->right))
				return 0;

		return 1;

}







main()
{
		struct node *p = Build123_b();
		struct node *s = Build123_a();
		struct node *q = Build123_bst();
//		printf("%d %d\n",minVal(p),maxVal(p));
//		printtree(p);
		printf("p :isBST : %d\n",!isBST(p));
//		printtree(s);
		printf("s : isBST : %d\n",!isBST(s));
		printtree(q);
		printf("q :BST : %d\n",!isBST(q));
//		printf("node-left %d\n",maxVal(q->left));
//		printf("maxVal %d\n",maxVal(q));
//		printf("miVal : %d\n",minVal(q));
}

