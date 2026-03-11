/*	PRN numbers - 260240130002 , 260240130028
  Program to count digits of a number - using an iterative approach
*/
#include<stdio.h>

int getCount(int );

int main(void)
{
 int num; 
 printf("Enter number : ");
 scanf("%d",&num);
 printf("Total digits in %d = %d\n", num , getCount(num));
}

int getCount(int x)
{
    if (x == 0)return 1;
    int count = 0;
    while (x > 0)
    {
     count++; 
     x /= 10;
    }
    return count; 
}
