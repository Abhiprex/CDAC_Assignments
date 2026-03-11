/*
  PRN : 260240130002 , 260240130028
  C program, where is a=10,b=20,c=30 evaluate the following
d=++a,++b,++c,a+5;
d=(++a,++b,++c,a+5); */ 
#include<stdio.h>
int main(void)
{
	int a=10,b=20,c=30,d;
	
	// First expression	
	d=++a,++b,a+5;
	printf("d=%d\n",d);

	// Second expression
	d=(++a,++b,a+5);
	printf("d=%d\n",d);
			
}//main
