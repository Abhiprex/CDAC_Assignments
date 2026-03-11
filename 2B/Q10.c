/*
   C program to print list of prime numbers 
*/

#include <stdio.h>

//Function declaration
int check_prime(int); 
void print_prime(int );



int main(void) {
    int range;
    //Range input for displaying prime numbers
    printf("Enter range: ");
    scanf("%d",&range);
    
    //Function call to print prime numbers 
    print_prime(range);   
  
    return 0;
}

//Checks if number is prime or not 
int check_prime(int x)
{
    int flag = 1; 

    for(int i=2; i<=x/2; i++) 
    {
        if(x%i==0)
        {
            flag=0; 
            break;   
        }
    }
    
return flag; 
}//main

//Prints number if it is prime
void print_prime(int r)
{
   for(int i=2; i<=r; i++) 
    {
        int y=check_prime(i);
        if(y==1) {
            printf("%d \n", i);
        }
    }
}















