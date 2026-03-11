/*   PRN numbers - 260240130002 , 260240130028
   Programt to count 1's and 0's in a given number - using recursive approach
*/
#include <stdio.h>

//Function declarations
int countOnes(char *str);
int countZeros(char *str);

int main(void) 
{
    char binary[100];
//Taking binary code input as a string  
    printf("Enter a binary code: ");
    scanf("%s", binary);

    printf("Number of 1's = %d\n", countOnes(binary));
    printf("Number of 0's = %d\n", countZeros(binary));

    return 0;
}

//Recursive function to count 1s
int countOnes(char *str) 
{
    if (*str == '\0') 
    {
        return 0;
    }
    int current = (*str == '1') ? 1 : 0;
    return current + countOnes(str + 1);
}

//Recursive function to count 0s
int countZeros(char *str) 
{
    if (*str == '\0') 
    {
        return 0;
    }
    int current = (*str == '0') ? 1 : 0;
    return current + countZeros(str + 1);
}
