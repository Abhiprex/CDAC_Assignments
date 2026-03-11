#include <stdio.h>

int main(void)
{
int rows = 5; 

for(int i=0 ; i<rows ; i++)
{
for(int j=0 ; j< (rows - i) - 1   ; j++)
{
printf(" ");
}
for(int k=0 ; k<=i ; k++)
{
printf("%d" , i+1);
}
printf("\n");
} 
}
