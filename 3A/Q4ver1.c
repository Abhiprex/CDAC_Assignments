/*	PRN numbers - 260240130002 , 260240130028
   Program to find the factorial of n - using an iterative approach
*/
#include<stdio.h> 

//Declaring functions 
int findFactorial(int ); 

int main(void)
{
 
 //Taking inputs 
 int input_num; 
 printf("Enter number : "); 
 scanf("%d",&input_num);
 
 //Calling function to calculate factorial of input number   
 printf("The factorial of %d = %d\n", input_num , findFactorial(input_num));
}


//Function to find factorial of a number 
int findFactorial(int x)
{
 int facto=1; 
 for(int i=x; i>0; i--)
  {
   facto*=i;
  }
 return facto; 
}
