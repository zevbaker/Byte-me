#include <stdio.h>
int main ()
{
int x,sum=0;
	printf("The first 10 natural number is :\n");
	for(x=1;x<=10;x++)
	{
		printf(" %d",x);
		sum+=x;
	}
	printf("\n The Sum is : %d", sum);
}
