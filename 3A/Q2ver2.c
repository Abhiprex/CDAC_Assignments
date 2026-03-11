/*	PRN numbers - 260240130002 , 260240130028
 Program to implement display and reverse display 
 for a string - using recursive approach 
*/
#include<stdio.h> 

//Declaring Functions 
int print_string(char a[], int size, int index);
int print_string_reversed(char a[], int size, int index);
int mystrlen(char *);

int main(void)
	

{
 printf("Enter a string : ");
 //Taking a user input string 
 char user_input[40];
 scanf("%[^\n]s",user_input);
 //char user_input[]="morning sunshine";
 //int string_len = sizeof(user_input)/sizeof(user_input[0]);
 
 //Calculating string length 
 int string_len = mystrlen(user_input);
 
 
 printf("Input string : ");
 //Calling function to print string as is 
 print_string(user_input , string_len, 0);
 printf("\n");
 
 //Calling function to print a string in reverse 
 print_string_reversed(user_input, string_len, 0);
 printf("\n");
}

//Function to print string 
int print_string(char a[], int size, int index)
{
 if(index==size)
  {
   return 0;  
  }
  printf("%c", a[index]);
  print_string(a , size , index + 1); 
}

//Function to print a string in reverse 
int print_string_reversed(char a[], int size, int index)
{
 if(index==size)
  {
   printf("Reversed string is : ");
   return 0;  
  }
  print_string_reversed(a , size , index + 1);
  printf("%c", a[index]);
}

//Function to calculate string length 
int mystrlen(char *str)
{
 int cnt; 
 for(cnt=0;*str;cnt++,str++)
 {
  
 }
 return cnt; 
}
