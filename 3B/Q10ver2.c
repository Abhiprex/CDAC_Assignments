/*	PRN numbers - 260240130002 , 260240130028
  Program to count digits of a number - using a recursive approach
*/
#include <stdio.h>

int getCount(int x);

int main(void) {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    int total = getCount(num);
    printf("Total digits in %d: %d\n",num, total);
    
    return 0;
}//main

//Function to count digits 
int getCount(int x) {
    if (x==0)
    {
      return 0;
    }
    return 1 + getCount(x / 10);
}
