/*
  Program to implement the display and reverse display functions for integer array 
  elements - using iterative method 
*/
#include<stdio.h>

//Function declarations 
void print_array(int * , int len);
void print_reverse_array(int * , int len);

int main(void)
{
 //Taking input array of 10 elements
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 
 //Calculating array length	
 int arr_length = sizeof(a)/sizeof(a[0]);
 
 
 printf("Given array : ");
 //Calling function to print array as is 
 print_array(a,arr_length); 
 printf("\n");
 
 printf("Reversed array : ");
 //Calling function to print array in reverse 
 print_reverse_array(a,arr_length);
 printf("\n");
}//main


//function to print array as given
void print_array(int *a , int len)
{ 
  for(int i=0; i<len; i++)
  {
   printf(" %d ",a[i]);
  }
}

//function to print array reversed
void print_reverse_array(int *a , int len)
{
 for(int k=len-1; k>=0; k--)
  {
   printf(" %d ",a[k]);
  }
}
