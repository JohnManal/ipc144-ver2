/***************************************************************** 

    File: lab3main.c

    Author: [John Manal]
    Seneca email: [jdmanal@myseneca.ca]

    To compile the program on matrix, type:
        gcc -Wall lab3.c lab3main.c -o lab3
    To run program:
        ./lab3
        
***************************************************************/
// Visual Studio users: Uncomment next line
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Required function prototypes: DO NOT MODIFY
int isLower(char letter);
char toUpper(char letter);
int readAge(void);
int readDayOfWeek(void);
int readHasCoupon(void);
double ticketPrice(int age, int hasCoupon, int dayOfWeek);


// Code your main function below:
int main(void) {
    int dayOfWeek = 0;
    int age = 0;
    int hasCoupon = 0;
    double finalPrice = 0.0;

    dayOfWeek = readDayOfWeek();


    if (dayOfWeek != 2) {
        age = readAge();
        hasCoupon = readHasCoupon();
    }
    else {
        age = 0;
        hasCoupon = 0;

    finalPrice = ticketPrice(age, hasCoupon, dayOfWeek);


    printf("Your ticket will cost: $%.2f\n", finalPrice);

    return 0;
}
