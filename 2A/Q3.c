/* 
   Program to implement a system to calculate the grade of student based on marks in n subjects
*/
#include<stdio.h>
int main(void)
 
 
{
int i,sub=0,sum=0,marks=0;
float percentage=0,total_sub=0;
char grade;

//Subject input 
printf("Number of subjects:\n");
scanf("%d",&sub);

//Marks input 	
for(i=1;i<=sub;i++)
{
  printf("Enter marks for subject %d:\n",i);
  scanf("%d",&marks);
  sum += marks;

}

total_sub=sub*100;
percentage=sum/total_sub;


// if loop to check grade 
if(percentage<=30)
{
printf("Grade:F\n");
}else if(percentage<=50)
 {
 printf("Grade:D\n");
 }else if(percentage<=60)
  {
   printf("Grade:C\n");
  } else if(percentage<=70)
     {
      printf("Grade:B\n");
     } else if(percentage<=80)
       {
        printf("Grade:A\n");
       } else if(percentage<=90)
        {
         printf("Grade:A+\n");
        }
        

// display|debugging

//printf("total_sub:%f\n",total_sub);
//printf("sub:%d\n",sub);
//printf("sum:%d\n",sum);
//printf("percentage:%.2f\n",percentage*100);

}//main

