/*	PRN numbers - 260240130002 , 260240130028
   Program to find the sum of n numbers - using an iterative approach
*/
#include<stdio.h> 

//Declaring functions 
int findSum(int );	

int main(void) 
{
 //Taking Range input
 int range,sum; 
 printf("Enter range :\n"); 
 scanf("%d",&range); 
 //Calling function in print to find sum of numbers 
 printf("The sum of first %d numbers = %d\n", range , findSum(range));
}

//Function to calculate sum of numbers in a range 
int findSum(int x)
{
 int sum=0; 
 for(int i=0; i<=x; i++)
  {
   sum+=i; 
  }
 return sum; 
}
