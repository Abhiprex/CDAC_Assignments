/* PRN numbers = 260240130002 , 260240130028 
  Program to convert decimal from Decimal number to Binary and Octal - using iterative appraoch 
*/
#include<stdio.h>
#define nl printf("\n");

//Function declaring 
void convertBinary(int);
void convertOctal(int number);
void countZeroOne(int, int);

int main()
{
	//Taking a number as input for conversion 
	int num; 
	printf("\nEnter number : ");
	scanf("%d", &num);
	
	//Calling conversion functions 
	convertBinary(num);
	convertOctal(num); 
	
	return 0;
}//main

//Function to convert Decimal to binary 
void convertBinary(int number)
{
	int remainder, i=0,arr[50] ={-1},j;
	int count1=0, count2 =0;
	int quotient = number;
	
	while(quotient != 0)
	{
		quotient = number/2;
		remainder = number%2;
		number = quotient;
		arr[i] = remainder;
		i++;
		
		if(remainder == 1)
			count1++;
		if(remainder == 0)
			count2++;
	
	}

	printf("Binary number is : ");
	for(int j=i-1; j>=0;j--)
	{
		printf("%d", arr[j]);
	}
	printf("\n");

}

//Function to convert Decimal to Octal 
void convertOctal(int number)
{
	int remainder, i=0,arr[50] ={-1},j;
	int count1=0, count2 =0;
	int quotient = number;
	
	while(quotient != 0)
	{
		quotient = number/8;
		remainder = number%8;
		number = quotient;
		arr[i] = remainder;
		i++;
		
		if(remainder == 1)
			count1++;
		if(remainder == 0)
			count2++;
	
	}

	printf("Octal number is : ");
	for(int j=i-1; j>=0;j--)
	{
		printf("%d", arr[j]);
	}
	printf("\n");
	
}



