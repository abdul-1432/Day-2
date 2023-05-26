// example on loops

#include <stdio.h>
void main()
{
	int c, x,y,z;
	for(c=1;c<=5;c++)
	{
		printf("\n enter 2 values :");
		scanf("%d%d",&x,&y);
		z=x+y;
		printf("\n first value is : %d",x);
		printf("\n second value is : %d",y);
		printf("\n total value is : %d",z);
	}
}
