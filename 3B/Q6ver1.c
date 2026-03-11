/*
  PRN numbers - 260240130002 , 260240130028
  Program to print the fibonacci series - using iterative approach
*/

#include<stdio.h>

//Function declarations 
void fiboSeries(int x); 

int main(void)
{
 //Taking range as input to print series 
 	int range;
 	printf("Enter range = ");
 	scanf("%d",&range);  
 
 //Calling function to print fibonacci series at given input range  
 	printf("0\n");
 	printf("1\n");
 	fiboSeries(range); 
}

//Function to print fibonacci series 
void fiboSeries(int x)
{
 	int d,d1=0,d2=1; 
 	for(int i=0; i<=x-2; i++)
	{
	 d = d1 + d2; 
	 printf("%d\n",d);
	 d1=d2;  
	 d2=d;
	 //printf("d1= %d d2= %d\n",d1,d2);
	}
}
