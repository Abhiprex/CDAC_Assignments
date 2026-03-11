// program for factorial calculation
#include<stdio.h>
int main(void)
{
int a,fact=1,i;
	printf("enter no.");
	scanf("%d",&a);	
for(i=a;i>0;i--)
{
fact=fact *i;
}

printf("Factorial =%d\n",fact);

}//main

 
