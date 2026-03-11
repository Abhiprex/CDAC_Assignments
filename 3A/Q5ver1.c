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
 printf("Enter numbers :\n"); 
 scanf("%d %d",&input_num1, &input_num2);
 
 //Calling the function in print to find GCD   
 printf("The GCD of %d and %d = %d\n",input_num1, input_num2 , findGCD(input_num1,input_num2));
}

//Function to find GCD of two numbers 
int findGCD(int a, int b)
{
 int temp; 
 while(b!=0)
 {
  temp=b;
  b=a%b; 
  a=temp;
 }
 return a ; 
}

