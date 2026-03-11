/*	PRN numbers - 260240130002 , 260240130028
  program for number format conversion (decimal , binary , octal) - using a recursive approach 
*/

#include<stdio.h>
#define nl printf("\n");

//Functions declaration
void decToBinary(int );
void decToOctal(int );
int getCount(int ); 

int main(void)
{
 //Taking number as input to convert
 int num;
 printf("Enter number :"); 
 scanf("%d", &num);
 
 //Calling functions to convert input number
 printf("Binary = ");decToBinary(num);nl
 printf("Octal = ");decToOctal(num);nl 
}//main 

//Function to count digits in a number
int getCount(int x)
{
 int count=0;
 while(x!=0)
  {
   x/10; 
   count++;
  }
 return count; 
}
//Function to convert Decimal format number to binary 
void decToBinary(int x)
{
 if(x>1)
 {
  decToBinary(x/2);
 }
 printf("%d",x%2);
}

//Function to convert Decimal format number to octal
void decToOctal(int x)
{
 if(x>1)
 {
  decToOctal(x/8);
 }
 printf("%d",x%8);
}









