// cd LearningC
// gcc myfirstprogram.c -o myfirstprogram && ./myfirstprogram

#include <stdio.h> 

int main() {
    printf("Hello World!\n\n");
    printf("I am learning C.\n");
    printf("And it is awesome!\n\n");

    // Create variables
    int myNum = 15; // Integer (whole number)
    float myFloatNum = 5.99; // Floating point
    char myLetter = 'D'; // Character

    // Print variables
    printf("Different variables in C:\n");
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n\n", myLetter);

    printf("My favourite number is %d\n", myNum);

    printf("My number is %d and my letter is %c\n", myNum, myLetter);

    printf("My favourite number is %d\n", 15);
    printf("My favourite letter is %c\n", 'D');
    return 0;

}
