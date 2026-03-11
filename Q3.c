/*
  PRN : 260240130002 , 260240130028
  Program to differentiate between post , pre decrement operators
*/ 
#include<stdio.h>

int main(void)
{
 	int num1,num2,num3, result1=0 , result2=0 , result3=0; 
 	printf("Enter number : ");
 	
 	//Taking a number as input
 	scanf("%d %d %d", &num1 , &num2 , &num3);
 	
 	printf("a) Input number = %d" , num1);
 	printf("\nk++ = %d \n" , result1 = num1++);
 	printf("++k = %d \n" , result1 = ++num1);
	
	printf("\n");
	
	printf("b) Input number = %d" , num2);
	printf("\nx++*10 = %d \n" , result2 = num2++*10);
 	printf("++x*10 = %d \n" ,  result2 = ++num2*10);
 	
 	printf("\n");
	
	printf("c) Input number = %d" , num3);
	printf("\np--/3 = %d \n" , result3 = num3--/3);
 	printf("--p/3 = %d \n" ,  result3 = --num3/3);
}
