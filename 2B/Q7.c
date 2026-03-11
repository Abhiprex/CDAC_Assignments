/*
   Implement a C program to check given no. is armstrong or not
*/
#include<stdio.h>

//Function declarations 
int getCount(int );
int power(int , int);
int armstrongSum(int , int); 
void checkArmstrong(int , int);


int main(void)
{
 int input_num;
 //Number input 
 printf("Enter Number : \n");
 scanf("%d",&input_num);
 
 
 int num_count = getCount(input_num); 
 int sum = armstrongSum(input_num , num_count); 
 checkArmstrong(input_num , sum); 
 
}

//Function to count digits in a number 
int getCount(int x)
{
 int count=0; 
 if(x==0)
  {
   return 1;
  }
 while(x!=0)
  {
   x/=10;
   count++;
  }
 return count; 
}


//Function to calculate power of a number 
int power(int num , int pow)
{
 int result = 1; 
 while(pow!=0)
  {
   result *= num;
   pow--; 
  }
 return result; 
}



int armstrongSum(int num, int num_count)
{
 int sum=0;
 for(int i=0;  i<=num_count; i++)
  {
   sum+= power( num%10 , num_count); 
   num/=10;
  }
 return sum; 
}

//Function to check if a number is armstrong
void checkArmstrong(int num, int sum)
{
 if(num==sum)
  {
   printf("It is an Armstrong number.\n"); 
  }else{
        printf("Not an Armstrong number.\n");
       }
}
