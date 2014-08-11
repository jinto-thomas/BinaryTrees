#include "struct_def.h"
int count = 0;


struct node *Build123_c(void)
{
		struct node *root = 0;
		root = insert(root,2);
		root->left = insert(root,1);
		root->right = insert(root,3);

		return root;
}


int size (struct node *node)
{
		if (node != 0) {
				size(node->left);
						count++;
				size(node->right);
		}

		return count;
}

int size_2(struct node *node)
{	
		if (node == 0)
				return 0;
		else {
				return size_2(node->left) + 1 + size_2(node->right);
		}
}

				
main()
{
		printf("%d\n",size_2(Build123_c()));
}
