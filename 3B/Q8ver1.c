/*   PRN numbers - 260240130002 , 260240130028
   Programt to count 1's and 0's in a given number - using iterative approach
*/
#include <stdio.h>
#include <string.h>

int main(void)
{   
    
    char binary[100];
    int count1 = 0, count0 = 0;
    
    //taking binary code input as a string 
    printf("Enter a binary code: ");
    scanf("%s", binary);

    //iterating through string to calculate 1's and 0's 
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '1') {
            count1++;
        } else if (binary[i] == '0') {
            count0++;
        }
    }
    
    //Printing results 
    printf("Number of 1's = %d\n", count1);
    printf("Number of 0's = %d\n", count0);

    return 0;
}
