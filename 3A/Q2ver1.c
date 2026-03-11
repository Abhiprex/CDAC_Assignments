/*	PRN numbers - 260240130002 , 260240130028
  Program to implement the display and reverse display functions for a string.
*/
#include<stdio.h>
#include<string.h> 

//Functions declaration
void print_string(char s[] , int);
void print_string_reversed(char s[] , int);

int main(void)
{
 
 //Defining input array
 char user_input[]="morning sunshine";
 
 //Calculating string length
 int string_len = sizeof(user_input)/sizeof(user_input[0]);
 
 //Calling functions for printing string  
 print_string(user_input , string_len);
 printf("\n");
 
 //Calling function to print the string reversed 
 print_string_reversed(user_input , string_len);
 printf("\n");  
}

//Function for printing a string as is 
void print_string(char s[],int len)
{
 for(int i=0; i<len; i++)
  {
   printf("%c",s[i]); 
  }
}

//Function for printing a string in reverse 
void print_string_reversed(char s[] , int len)
{
 for(int i=len-1; i>=0; i--)
  {
   printf("%c",s[i]); 
  }
}
