/*
  PRN : 260240130002 , 260240130028
  Program to swap two numbers using XOR operator
*/ 
#include<stdio.h>

int main(void)
{
 	int num1 , num2; 
 	printf("Enter two numbers : ");
 	
 	//Taking two numbers as input
 	scanf("%d %d", &num1, &num2); 
 	
 	//Pre-swap result
 	printf("Original Numbers : A = %d , B = %d\n", num1 , num2);
 	
 	//Logic to swap numbers using XOR 
 	num1 = num1 ^ num2; num2 = num1 ^ num2; num1 = num1 ^ num2;
 	
 	//Printing swapped result
 	printf("Swapped Numbers : A = %d , B = %d\n", num1 , num2);
} 
