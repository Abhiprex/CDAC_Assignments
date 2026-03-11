#include <stdio.h>

int main(void)
{
int rows = 6; 

for(int i=0 ; i<rows ; i++)
{
for(int j=0 ; j< (rows - i) - 1   ; j++)
{
printf(" ");
}
for(int k=0 ; k<2*i-1; k++)
{
int p=1;
p++;
printf("%d",p);
}
printf("\n");
}
}//main  
