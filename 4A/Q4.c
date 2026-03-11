/*
  PRN : 260240130002 , 260240130028
  Program to find biggest of  3 numbers
*/ 
#include<stdio.h>

int main(void)
{
	int num1 , num2 , num3; 
	
	//Taking three numbers as input 
	printf("Enter 3 numbers : "); 
	scanf("%d %d %d", &num1 , &num2 , &num3);
	
	//Conditional statement using ? 
	printf("\nBiggest number = %d\n" , (num1 > num2) ? ((num1 > num3) ? num1 : num3 ) : ((num2 > num3) ? num2 : num3 ));

}//main
