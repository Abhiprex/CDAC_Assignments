/*
  Program for implementing a choice based calculator using functions 
*/
#include<stdio.h>

//Functions declarations 
float sum(float , float );
float diff(float , float );
float mult(float , float );
float div(float , float );

int main(void)
{
	float num1, num2;
 	int choice;
 	//Numbers input 
 	printf("Input Number 1 and 2 : \n");
 	scanf("%f",&num1);scanf("%f",&num2);
 	
 	//Choice input
 	printf("Input choice (1.+ , 2.- , 3.* , 4./)\n");
 	scanf("%d",&choice);
 	
 	//Calling functions in a switch-cases
 	switch(choice)
 		{
 		case 1:
 		printf("Sum = %.2f\n", sum(num1 , num2));
 		break;
 		
 		case 2:
 		printf("Difference = %.2f\n", diff(num1, num2));
 		break;
 		
 		case 3:
 		printf("Multiplication = %.2f\n", mult(num1,num2));
 		break;
 		
 		case 4:
 		if(num1!=0 && num2!=0)
 			{
 			printf("Division = %.2f\n", div(num1,num2));
 			}else	{
 				 printf("Invalid.\n");
 				}
 		break;
 		}
 	
 	
}//main

//Functions for arithmetic expressions 
//Addition
float sum(float a, float b)
{
 return a+b;
}

//Subtraction
float diff(float a, float b)
{
 return a-b;
}

//Multiplication 
float mult(float a, float b)
{
 return a*b; 
}

//Division
float div(float a, float b)
{
 return a/b;
}

