/*	PRN numbers - 260240130002 , 260240130028
   Program to find the GCD of two numbers - using an iterative approach
*/
#include<stdio.h> 
 
//Declaring functions 
int findGCD(int ,int );

int main(void)
{
 //Taking two numbers as input 
 int input_num1, input_num2; 
 
 printf("Enter numbers : "); 
 scanf("%d %d",&input_num1, &input_num2);
 
 //Calling function to find GCD of two numbers
 printf("\nThe GCD of %d and %d = %d \n", input_num1 , input_num2 ,  findGCD(input_num1,input_num2));
 }//main
 
int findGCD(int a , int b)
{
     if(b==0)
      {
       return a;
      } 
      return findGCD(b , a%b);
}
