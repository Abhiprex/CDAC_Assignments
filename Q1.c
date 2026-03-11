/*
  PRN : 260240130002 , 260240130028
  Program to swap two numbers using XOR operator
*/ 
#include <stdio.h>

// Function prototypes
long long fact(int);
int element(int, int);

int main() {
    
    int rows,i,j,k;
    printf("Enter rows : ");
    scanf("%d", &rows);
   
    printf("\n");
    
//Logic to make a triangle
    for (i = 0; i < rows; i++)
     {
        for (k = 0; k < rows - i; k++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) 
        {
            //Calling function to print elements using nCr formula 
            printf("%4d", element(i, j));
        }
        printf("\n");
    }

    return 0;
}

//Function to calculate factorial 
long long fact(int x) {
    long long result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result;
}

//Function to calculate nCr 
int element(int n, int k) {
    return fact(n) / (fact(k) * fact(n - k));
}
