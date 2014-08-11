#include "struct_def.h"

struct node *Build123_a(void)
{
		struct node *root = NewNode(2);
		struct node *l = NewNode(1);
		struct node *r = NewNode(3);

		root->left = l;
		root->right = r;
}


struct node *Build123_b(void)
{
		struct node *root = 0;

		root = NewNode(2);
		root->left = NewNode(1);
		root->right = NewNode(3);
		return root;
}
				
struct node *Build123_c(void)
{
		struct node *root = 0;
		root = insert(root,2);
		root->left = insert(root,1);
		root->right = insert(root,3);

		return root;
}

main()
{
		printtree(Build123_a());
		printtree(Build123_b());
		printtree(Build123_c());
}
