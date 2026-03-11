//Sum amd average of n numbers

#include <stdio.h>

int main(void)
{
	int x,i,sum=0;
 
	printf("Input Number :");
	scanf("%d", &x);

	for(i=0;i<(x+1);i++)
	{
    	 sum+=i;
	}

	printf("Sum : %d\n", sum);
	printf("avg : %d\n", sum/x);
}
