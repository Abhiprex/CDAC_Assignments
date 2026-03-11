/*Write a c prrgram to find out the biggest of three input numbers*/
#include<stdio.h>
int main(void)
{
int a,b,c;
printf("Give three input numbers: ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
printf("Inputs given: %d , %d, %d\n", a,b,c);

if(a>b && a>c)
{
printf("%d\n",a);
}
else if(b>a && b>c)
{
printf("%d\n",b);
}
else{printf("%d\n",c);}

}//main

