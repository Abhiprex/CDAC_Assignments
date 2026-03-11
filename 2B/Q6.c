/*
     C program to print Fibonacci series
*/
#include<stdio.h>

int fibonacci_series(int x); 

int main(void)
{
 int n;
 //Range input to print numbers 
 printf("Enter range :");
 scanf("%d",&n);
 fibonacci_series(n); 
}

//Function to print fibonacci numbers in a series
int fibonacci_series(int x)
{
 int next,num1=0,num2=1; 
 printf("%d\n%d\n",num1,num2);
 for(int i=0;i<=x;i++)
  {
    next=num1+num2; 
    printf("%d\n",next);
    num1=num2;
    num2=next; 
  }
 

}
