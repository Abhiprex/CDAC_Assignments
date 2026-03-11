/*Write a C program for reversing three digits
*/
#include <stdio.h>


int main()
{
	//Taking a number as input 
	int a , d1, d2, d3;
	printf("Enter a three digit number: \n");
	scanf("%d",&a);

//Logic for seperating and storing digits
	if(a>999 || a<0)
		{
		 printf("Invalid Number.");
		}
		else
		{
	d1 = a % 10; 
	d2 = ( a % 100 ) / 10;
	d3 = a / 100;

//Printing results 
	printf("Input number : %d\n" , a);
	
	printf("Reversed : %d\n", (d1*100) + (d2*10) + d3);
		}//else

return 0;
}//main
