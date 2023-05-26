// understanding  switch-case

#include <stdio.h>
void main()
{
	int cl;
	printf("enter class number (1-12) : ");
	scanf("%d",&cl);
	switch(cl)
	{
		case 1 :
		case 2 :
		case 3 :
		case 4 :
		case 5 : printf("PRIMARY BLOCK");  break;
		case 6 :
		case 7 : printf("upper PRIMARY BLOCK");  break;
		case 8 :
		case 9 :
		case 10: printf("Secondary block"); break;
		case 11 :
		case 12: printf("higher Secondary block"); break;
		default: printf("Invalid class number");
	}
}
