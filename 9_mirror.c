#include "struct_def.h"

void mirror (struct node *p)
{
		if (p->left == 0 && p->right == 0)
			return;
		else {
				mirror (p->left);
				mirror (p->right);	
				struct node *temp = p->left;		
				p->left = p->right;
				p->right = temp;
				
		}
}

main()
{
		struct node *p = Build123_b();
		struct node *test = p;
		printtree(test);
		printf("---------------\n");
		mirror(test);
		printtree(test);
}
