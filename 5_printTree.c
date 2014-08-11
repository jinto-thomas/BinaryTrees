#include "struct_def.h"

void printTree (struct node *node)
{
		if (node != 0) {
				printTree(node->left);
				printf("%d ",node->data);
				printTree(node->right);
		}
}

main()
{
		struct node *p = Build123_b();
		printTree(p);
		return 0;
}
