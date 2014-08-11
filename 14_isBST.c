#include "struct_def.h"

int max(int a, int b, int c)
{
		if (a >b && a > c)
				return a;
		else if (b > a && b > c)
				return b;
		else 
				return c;
}

int min(int a,int b, int c)
{
		if (a < b && a < c)
				return a;
		else if (b < a && b < c)
				return b;
		else
				return c;
}


int maxVal (struct node *p)
{
		if (p == 0)
				return 0;
		else {
				return max(p->data,maxVal(p->left),maxVal(p->right));
			 
		}
}



int minVal (struct node *p)
{
		if (p == 0)
				return 0;
		else {
				return min(p->data, minVal(p->left),minVal(p->right));
		}
}




int isBST (struct node *node,int small, int big)
{
		if (node == 0)
				return 1;
		else {
				if (node->data > small && node->data < big) {
						if (isBST(node->left,small,node->data) &&
								isBST(node->right,node->data,big)) {
				
								return 1;
				}
				}
		}
		return 0;

}

main()
{
		struct node *p = Build123_a();
		struct node *s = Build123_b();
//		printtree(p);
		printf("\n");
//		printf("min %d\n",minVal(s));
//		printtree(s);
//		printf("max %d\n",maxVal(s));
		printf("is bst %d ",isBST(p,-1,100));
//		printf("\tmax :%d ",max(8,4,9));
}

