/* 
	Write a program to find if a given character is a vowel or not
 */
 
#include<stdio.h>
#include<ctype.h>


int main(void)
{
	//Taking character input
	char user_input , user_char;
	printf("Enter Character :");
	scanf("%c", &user_input);
	
	user_input = tolower(user_input);
	
	//Logic for printing vowel
	if(user_input !='a' && user_input !='e' && user_input !='i' && user_input !='o' && user_input !='u')
		{
		 printf("Not a vowel.\n");
		}
		 else
		{
		  printf("Is a vowel.\n");
		}

}//main
