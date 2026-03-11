/*
    Implement a C program to have recursive sum of digits in a number
*/
#include<stdio.h>
//Function declarations 
int get_count(int);
int recursive_sum(int);

int main(void)
{
//Number inputs 
int num;
printf("enter number:");
scanf("%d",&num);

//Function call to print sum of digits 
int result=recursive_sum(num);

printf("the sum is: %d\n",result);

}//main

//Function to get count of digits in a number 
int get_count(int n)
{
int count=0;
while(n!=0)
{
n=n/10;
count++;
}
return count;
}

//Function to return sum of digits in a number 
int recursive_sum(int n)
{
int digits=get_count(n);
int sum=0; 

for(int i=0; i<digits; i++)
 {
  sum += n%10; 
  n /=10; 
 }
if(sum <10)
 {
  return sum; 
 } else{ recursive_sum(sum);}

}
