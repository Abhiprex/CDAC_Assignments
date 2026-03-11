/*
  PRN : 260240130002 , 260240130028
  Program using formatted I/O using printf
  
  %5d , %05d , %-5d , %8.2f , %.2f 
*/ 
#include<stdio.h>
#define nl printf("\n"); //macro for new line

int main(void)
{
	int num1 = 12;
	float num2 = 25.625;  
  
	printf("%5d",num1);nl
	printf("%05d",num1);nl
	printf("%-5d",num1);nl
	printf("%8.2f",num2);nl
	printf("%.2f",num2);nl
}

