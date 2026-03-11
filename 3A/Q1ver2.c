/*	PRN numbers - 260240130002 , 260240130028
 Program to implement display and reverse display for integer array elements using recursive approach 
*/
#include<stdio.h> 

//Declaring functions 
int print_array_reversed(int * , int , int); 
int print_array(int *a, int size, int index);

int main(void)
{
 //Input array 
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 int arr_size = sizeof(a)/sizeof(a[0]);	 

 //Calling functions to print array as is 
 printf("Array is : ");
 print_array(a,arr_size,0); 
 printf("\n");
 
 //Calling function to print array reversed
 print_array_reversed(a,arr_size,0);
 printf("\n");
}


//Function to print an array 
int print_array(int *a, int size, int index)
{
 if(index==size)
  {
   return 0;  
  }
  printf(" %d ", a[index]);
  print_array(a , size , index + 1);
  
}


//Function to print an array in reverse 
int print_array_reversed(int *a, int size, int index)
{
 if(index==size)
  {
   printf("Reversed array is : ");
   return 0;  
  }
  print_array_reversed(a , size , index + 1);
  printf(" %d ", a[index]);
}
