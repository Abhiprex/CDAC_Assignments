/*	PRN numbers - 260240130002 , 260240130028
    Program to find the power of N - using an iterative appraoach
*/
#include<stdio.h>

//Function declarations 
int power(int , int);

int main(void)
{
 //Taking base and exponent input
 printf("Enter number and power : "); 
 int num , pow; 
 scanf("%d %d", &num , &pow);
 
 //Calling function to calculate power on given base
 int result = power(num,pow); 
 printf("\nResult = %d\n" , result);  
 
}//main

//Function to calculate power 
int power(int num , int pow)
{
 int result = 1; 
 while(pow!=0)
  {
   result *= num;
   pow--; 
  }
 return result; 
}


