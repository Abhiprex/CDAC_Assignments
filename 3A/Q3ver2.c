/*	PRN numbers - 260240130002 , 260240130028
   Program to find the sum of n numbers - using a recursive approach
*/
#include<stdio.h> 

//Declaring functions 
int findSum(int );

int main(void) 
{
 //Taking range input 
 int range,sum; 
 printf("Enter range :\n"); 
 scanf("%d",&range); 
 
 //Calling function to calculate sum of N numbers 
 printf("The sum of first %d numbers = %d\n", range , findSum(range));
}

//function to calculate sum of N numbers 
int findSum(int x)
{
 if(x==0)
  {
   return 0; 
  }
  return x + findSum(x-1); 
}
