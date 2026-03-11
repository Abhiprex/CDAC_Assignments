/*
  PRN : 260240130002 , 260240130028
  Program to convert hh:mm:ss to Total seconds and vice-versa
*/ 
#include <stdio.h>

// Function Prototypes
int totalSeconds(int, int, int);
void secondsToHours(int);

int main(void) {
    int hrs, mins, secs, choice;

//Taking Choice for input format
    printf("Select input format : 1.hh-mm-ss OR 2.Seconds: ");
    scanf("%d", &choice); 

//Switch case for choosing which function to  call
    switch (choice) {
        case 1:
            printf("Enter hours minutes seconds: ");
            scanf("%d %d %d", &hrs, &mins, &secs);
            //Calling function to convert to seconds 
            printf("\nTotal Seconds = %d\n", totalSeconds(hrs, mins, secs));
            break;

        case 2:
            printf("Enter seconds: ");
            scanf("%d", &secs); 
            //Calling function to convert to hh:mm:ss format
            secondsToHours(secs);
            printf("\n"); 
            break;

        default:
            printf("Invalid \n");
    }

    return 0;
}

//Function to calculate total seconds from hh:mm:ss
int totalSeconds(int a, int b, int c) {
    return a * 3600 + b * 60 + c;
}

//Function to convert seconds to hh:mm:ss format
void secondsToHours(int x) {
    int hours, mins, seconds;
    hours = x / 3600;
    mins = (x % 3600) / 60;
    seconds = x % 60;

    printf("Conversion to hh:mm:ss => %02d:%02d:%02d", hours, mins, seconds);
}
