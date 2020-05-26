#include <stdio.h>
int main ()
{
	int sum,x;
	float avg=0;
	printf("input 10 numbers:");
	for(x=0;x<10;x++)
	{
		printf("\nNumber-%d : ",x+1);
		scanf("%d",&sum);
		avg+=sum;
	}
	printf("the sum of 10 numbers is : %g\n",avg);
	avg=avg/x;
	printf("the average is : %f",avg);
}
