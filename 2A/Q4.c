/* 
  Program to find gdc and lcm of two input numbers 
*/
#include<stdio.h>

int main(void)
{
int num1,num2,res,a,b;

//Numbers input
printf("Input two numbers :");
scanf("%d %d",&num1,&num2);

a=num1;b=num2;

//GCD check loop
while(b!=0)
{
int temp=b;
b=a%b;
a=temp;
}
int gcd=a; 
printf("GCD = %d\n",gcd);

//LCM formula 
int lcm = (num1*num2) / gcd; 
printf("LCM = %d\n",lcm);

}//main 
