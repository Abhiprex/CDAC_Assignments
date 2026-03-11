/* 
  Implement a C program to check given no. is perfect no. or not
*/
#include<stdio.h>

//Function declarations 
int denominator(int );
int check_perfect(int x, int y);

int main ()
{ 
//Number input 
int input_num; 
printf("Input a number :");
scanf("%d", &input_num);
//printf("input = %d\n", input_num);

//Function calls to check result
int y = denominator(input_num); 
int z = check_perfect(input_num,y);



}//main

//Function to find half the sum of all its positive divisors  
int denominator(int x)
{
 int sum=0;
 for(int i=1; i<=x; i++)
  {
   if(x%i==0)
    {
     sum+=i;
    }
  }
  return sum/2; 
}

//Function to check if number is primes 
int check_perfect(int x, int y)
{
if(x==y)
 {
  printf("It is a perfect number.\n");
  return 1; 
 }else
     {
      printf("Not a perfect number.\n");
      return 0;
     }
 
}

