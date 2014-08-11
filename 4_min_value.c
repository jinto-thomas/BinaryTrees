#include "struct_def.h"

int minValue(struct node *p)
{
		if (p->left == 0)
				return;
		else {
				minValue(p->left);
				return (p->data < p->left->data)? p->data:p->left->data;
		}
}

int minValue_2(struct node *p)
{
		while (p->left != 0){
				p = p->left;
		}
		return p->data;
}




main()
{
		struct node *p = Build123_b();
		printf("%d\n",minValue_2(p));
}

