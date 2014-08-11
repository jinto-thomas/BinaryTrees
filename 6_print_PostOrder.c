#include "struct_def.h"

void printPostorder (struct node *node)
{
		if (node != 0) {
				printPostorder(node->left);
				printPostorder(node->right);
				printf("%d ",node->data);
		}
}


main()
{
		struct node *p = Build123_b();
		printPostorder(p);
		return 0;
}


