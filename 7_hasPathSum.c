#include "struct_def.h"

int hasPathSum (struct node *node, int sum)
{
		if (node == 0)
				return (sum == 0);
		else {
				
				return  (hasPathSum(node->left,sum - node->data)) || 
					    (hasPathSum(node->right,sum - node->data));
		}
}

main()
{
		struct node *p = Build123_b();
		printf("%d\n",hasPathSum(p,5));
		return 0;
}
