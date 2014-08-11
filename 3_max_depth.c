#include "struct_def.h"


struct node *Build123_b(void)
{
		struct node *root = 0;

		root = NewNode(2);
		root->left = NewNode(1);
		root->right = NewNode(3);
		return root;
}
				
int maxDepth(struct node *p)
{
		if (p == 0)
				return 0;
		else {
				return (1+maxDepth(p->left) < 1+maxDepth(p->right)) ? (1+maxDepth(p->right)):(1+maxDepth(p->left));
			}
}

main()
{
		struct node *t = Build123_b();
		printf("%d\n",maxDepth(t));
}
		
								
