//write a program to check if year is leap year 
#include <stdio.h>

int main(void)
{
int input_year; 
printf("Enter Year :");
scanf("%d", &input_year);

if((input_year%100!=0 && input_year%4==0) && input_year%400==0)
{
	printf("%d is Leap Year.\n" , input_year);
}
else
{
printf("not a leap year");
}
}//main
