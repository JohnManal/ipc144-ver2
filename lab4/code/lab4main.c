/*****************************************************************

    File: lab4main.c

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

int main(void) {
    int choice;
    int n;
    int result;

    do {
        choice = getMenuChoice();

        if (choice == 1) {
            n = readIntInRange(0, 30);
            result = powerOfTwo(n);
            printf("2^%d == %d\n", n, result);
        }
        else if (choice == 2) {
            n = readIntInRange(0, 12);
            result = factorial(n);
            printf("%d! == %d\n", n, result);
        }
        else if (choice == 3) {
            n = readIntInRange(0, 45);
            result = fibonacci(n);
            printf("F_%d == %d\n", n, result);
        }

    } while (choice != 0);

    return 0;
}