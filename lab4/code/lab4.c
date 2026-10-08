/***************************************************************** 

    File: lab4.c

    Author: [Your Name]
    Seneca email: [Your Seneca email address]

    To compile the program on matrix, type:
        gcc -Wall lab4.c lab4main.c -o lab4
    To run program on matrix, type:
        ./lab4
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "lab4.h"

int readIntInRange(int min, int max) {
    int x;

    printf("Please enter an integer between %d and %d inclusive: ", min, max);
    scanf("%d", &x);

    while (x < min || x > max) {
        printf("The input was not between %d and %d\n", min, max);
        printf("Please enter an integer between %d and %d inclusive: ", min, max);
        scanf("%d", &x);
    }

    return x;
}

int getMenuChoice(void) {
    int choice;

    printf("IPC Calculator\n\t1) Calculate 2^n\n\t2) Calculate n!\n\t3) Calculate the nth Fibonnaci number\n\t0) Exit \nPlease enter your choice: ");
    scanf("%d", &choice);

    while (choice < 0 || choice > 3) {
        printf("%d was not a valid entry\nPlease enter your choice: ", choice);
        scanf("%d", &choice);
    }

    return choice;
}
}

int twoToPowerOfN(int n) {
    int powered = 1;
    for (int i = 0; i < n; i++) {
        powered = powered * 2;
    }
    return powered;
}

int factorial(int n) {
    int factored = 1;
    for (int i = n; i > 0; i--) {
        factored *= i;
    }
    return factored;
}

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int prev = 0;
    int curr = 1;
    int next;

    for (int i = 2; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}