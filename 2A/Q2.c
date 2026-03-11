/* Program to implement income tax calculator by considering best possible parameters.
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int age,op,tax,income;
char gen;

//Age and gender input 
printf("Your age and Your gender (m or f): \n");
scanf("%d %c",&age,&gen);
printf("Income: \n");
scanf("%d",&income);
//gen=tolower(gen);

if(age<=60)
{
	if(income<=300000)
	{ 
	printf("Total tax 0 percentage");
	}
	else if(income>=300000 && income<=500000)
	{
	tax =(income-300000)*0.05;
	printf("Tax=%d",tax);
	}
	else if(income>=500000 && income<=700000)
	{ 
	tax=10000+(income-500000)*0.20;
	printf("Tax=%d",tax);
	}
	else if (income>=1050000)
	{
	tax=11000+(income-800000)*0.30;
	printf("Tax=%d",tax);
	}
}
	
else
{
	if(income<=300000)
	{ 
	printf("Total tax 0 percentage");
	}
	else if(income>=300000 && income<=500000)
	{
	tax =(income-300000)*0.05;
	printf("Tax=%d",tax);
	}
	else if(income>=500000 && income<=700000)
	{ 
	tax=12500+(income-250000)*0.20;
	printf("Tax=%d",tax);
	}
	else if (income>=1050000)
	{
	tax=12500+(income-400000)*0.30;
	printf("Tax=%d",tax);
	}
}

}//main
