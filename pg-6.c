// understanding if-else  with logical operators && || !
#include <stdio.h>
void main()
{
	int s1,s2,s3;
	printf("enter 3 subject marks ");
	scanf("%d%d%d",&s1,&s2,&s3);
	if (s1>=35 && s2>=35 && s3>=35)
		printf("\n PASS");
	else
		printf("\n Fail");

	if (s1<35 || s2<35 ||s3<35)
		printf("\n FAIL");
	else
		printf("\n PASS");

	if (!(s1>=35 && s2>=35 && s3>=35))
		printf("\n fail");
	else
		printf("\n pass");

	if (!(s1<35 || s2<35 ||s3<35))
		printf("\n PASS");
	else
		printf("\n FAIL");
}
