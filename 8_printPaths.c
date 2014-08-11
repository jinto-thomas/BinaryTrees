#include "struct_def.h"

void helper (struct node *node, int a[], int len)
{
		if (node == 0) {
				int i = 0;
				while (i < len)
						printf("-%d",a[i++]);
				printf("\n");
				
				return;
		}
		else {
				a[len] = node->data;
				int i = 0;

				helper (node->left,a,len+1);
				helper (node->right,a,len+1);
		}
}


main()
{
		struct node *p = Build123_b();
		int a[10];
		helper(p,a,0);
//		printtree(p);
}
