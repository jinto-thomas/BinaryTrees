#include "struct_def.h"


int sameTree(struct node *a, struct node *b)
{
		if (a == 0 && b == 0)
				return 1;
		else if(a != 0 && b != 0) {
				return ((a->data == b->data) && (sameTree(a->left,b->left) && sameTree(a->right,b->right)));
		}
		else
				return 0;

}

main()
{
		struct node *a = Build123_a();
		struct node *b = Build123_a();
		struct node *c = Build123_b();

		printf("a,b : %d\n",sameTree(a,b));
		printf("a,c : %d\n",sameTree(a,c));
}
