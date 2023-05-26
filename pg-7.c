// example on loops

#include <stdio.h>
void main()
{
	int x,y,z;
	char ans;
	do
	{
		printf("\n Enter 2 values :");
		scanf("%d%d",&x,&y);
		z=x+y;
		printf("\n first value is : %d",x);
		printf("\n second value is : %d",y);
		printf("\n total value is : %d",z);
		printf("\n Do You Want to Repeat y/n: ");
		fflush(stdin);  // to flush(clear) the standard input buffer
		scanf("%c",&ans);
	} while(ans=='y' || ans=='Y');
}
