#include "struct_def.h"

void doubleTree (struct node *p)
{
		if (p == 0)
				return;
		else {
				doubleTree(p->left);
				doubleTree(p->right);
				struct node *temp = p->left;
				p->left = NewNode(p->data);
				p->left->left = temp;

		}
}

main()
{
		struct node *p = Build123_a();
		doubleTree(p);
		printtree(p);
}



