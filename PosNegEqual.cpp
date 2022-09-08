#include <stdio.h>
int main()
{
	int p;
	printf("Enter a number : ");
	scanf("%d",&p);
	if ( p > 0 )
	{
		printf("%d is a positive number",p);
	}
	
	else if (p < 0)
	{
		printf("%d is a negative number",p);
	}
	
	else
	{
		printf("%d is equal to 0",p);
	}
	return 0;
}