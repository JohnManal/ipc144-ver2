/***************************************************************** 

    File: lab3.c

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



// --------------------------------------------
// Function PROTOTYPES
// --------------------------------------------

// NOTE: You must COMMENT Each function prototype!!!

int isLower(char letter) {
    if (letter >= 'a' && letter <= 'z') {
        return 1;
    }
    else {
        return 0;
    }
}

char toUpper(char letter){
    if (letter >= 'a' && letter <= 'z') {
        return letter - ('a' - 'A');
    }
    return letter;
}


int readAge(void) {
    int age;
    printf("Please enter the age of the customer: ");
    scanf("%d", &age);
    return age;
}

int readDayOfWeek(void) {
    int d;
    printf("Days of the week\n 1) Sunday\n 2) Monday\n 3) Tuesday\n 4) Wednesday\n 5) Thursday\n 6) Friday\n 7) Saturday\n  Please enter the day of the week you wish to see the movie(1 to 7) : ");
    scanf("%d", &d);
    return d;
}

int readHasCoupon(void) {
    char tf='f';
    printf("Do you have a coupon? (Y or N): ");
    scanf("%c", %tf);
    if (tf == 'y' or tf == 'Y') {
        return 1;
    }
    else {
        return 0
    }
}


double ticketPrice(int age, int hasCoupon, int dayOfWeek) {
    double basePrice = 0.0;
    if (dayOfWeek == 2) {
        basePrice = 5.00;
    }
    else if (dayOfWeek >= 3 && dayOfWeek <= 5) {
        if (age <= 12) {
            basePrice = 7.00;
        }
        else if (age >= 65) {
            basePrice = 9.00;
        }
        else {
            basePrice = 12.00;
        }
    }
    else {

        if (age <= 12) {
            basePrice = 8.00;
        }
        else if (age >= 65) {
            basePrice = 10.00;
        }
        else {
            basePrice = 15.00;
        }
    }

    if (dayOfWeek != 2 && hasCoupon == 1) {
        return basePrice * 0.80;
    }

    return basePrice;
}




// --------------------------------------------
// Function DEFINITIONS (define each function below)
// --------------------------------------------

