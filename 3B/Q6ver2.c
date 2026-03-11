/*
  PRN numbers - 260240130002 , 260240130028
  Program to print the fibonacci series - using iterative approach
*/

#include <stdio.h>

// Function declaration
int fibo(int n);

int main(void)
{
    int range;
    printf("Enter range : ");
    //Taking input for range 
    scanf("%d", &range);

    printf("Fibonacci Series:\n");
    //iterating to print all fibonacci series numbers in given range 
    for (int i = 0; i < range; i++) 
    {
        printf("%d\n", fibo(i));
    }
    printf("\n");

    return 0;
}

// Recursive function to find the nth Fibonacci number
int fibo(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    if (n == 1) 
    {
        return 1;
    }
    
    return fibo(n - 1) + fibo(n - 2);
}
