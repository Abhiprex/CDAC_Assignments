/* 
  Program to check if a given number is prime or not 
*/
#include<stdio.h>

int main()
{
//Number input
int count=0,x,i;
printf("Enter Number :\n");
scanf("%d",&x);


//Case where number is 1.
if(x==1){printf("Not a prime.\n");return 0;}

//Logic to check if number is prime.
for(i=1; i<=x; i++)
{
	if(x%i==0)
	{ 
	  count++; 
	}
}

//Print results
if(count>2)
{
  printf("Not a prime.\n");
}
else
{
printf("Prime\n");
}

return 0;


}//main
