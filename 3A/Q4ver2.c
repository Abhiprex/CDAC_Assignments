/*	PRN numbers - 260240130002 , 260240130028
   Program to find the factorial of n - using a recursive approach
*/
#include<stdio.h> 

//Declaring functions 
int findFactorial(int ); 

int main(void)
{
 //Taking a number as input 
 int input_num; 
 printf("Enter number : "); 
 scanf("%d",&input_num); 
 
 
 //Calling function to calculate factorial of input num
 printf("The factorial of %d = %d\n", input_num , findFactorial(input_num));
}

//Function to find factorial of a number 
int findFactorial(int x)
{
 int facto=1;
 if(x!=0)
  {
   facto = x * findFactorial(x-1);
  }
 return facto;
}
