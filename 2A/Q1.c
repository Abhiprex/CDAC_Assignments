/* Program to implement a choice based arithmetic calculator;
*/ 
#include<stdio.h>

int main(void)
{
 	//number input 
 	float num1, num2;
 	int choice;
 	printf("Input Number 1 and 2 : \n");
 	scanf("%f",&num1);scanf("%f",&num2);
 	
 	
 	//choice input 
 	printf("Input choice (1.+ , 2.- , 3.* , 4./)\n");
 	scanf("%d",&choice);
 	
 	//calculations using switch-case
 	switch(choice)
 		{
 		case 1:
 		printf("Sum = %.2f\n", num1+num2);
 		break;
 		
 		case 2:
 		printf("Difference = %.2f\n", num1-num2);
 		break;
 		
 		case 3:
 		printf("Multiplication = %.2f\n", num1*num2);
 		break;
 		
 		case 4:
 		if(num1!=0 && num2!=0)
 			{
 			printf("Division = %.2f\n", num1/num2);
 			}else	{
 				 printf("Invalid.\n");
 				}
 		break;
 		}
 	
}
