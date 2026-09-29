/***************************************************************** 

    File: lab2.c

    Author: [John Manal]
    Seneca email: [Jdmanal@myseneca.ca]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2.c lab2main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/

//Uncomment the next line if you are using Visual Studio
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// ----------------------------------------------------------------------------
// Function PROTOTYPES (below)
//    For each function, make a COMMENT stating what it:
//    1. accepts
//    2. is suppose to do
//    3. returns
// ----------------------------------------------------------------------------


int readLengthInInches(void);

int numFeet(int lengthInInches);

int numYards(int lengthInFeet);

double inchesToMeters(int lengthInInches);

void printResults(int lengthInInches, int lengthInFeet, int lengthInYards, double lengthInMeters);


// ----------------------------------------------------------------------------
// Function DEFINITIONS (below)
// Code the IMPLEMENTATION for each function below

int readLengthInInches(void)
{
    int inches;
    printf("Please enter the length measurement to the nearest inch: ");
    scanf("%d", &inches);
    return inches;
}

int numFeet(int lengthInInches) 
{
    return lengthInInches/12;
}

int numYards(int lengthInFeet)
{
    return lengthInFeet / 3;
}

double inchesToMeters(int lengthInInches)
{
    return (lengthInInches * 2.540)/100;
}

void printResults(int lengthInInches, int lengthInFeet, int lengthInYards, double lengthInMeters)
{
    printf("Total length: %d\n", lengthInInches);
    printf("Length rounded to number of feet: %d\n", lengthInFeet);
    printf("Length rounded to number of yards: %d\n", lengthInYards);
    printf("Total Length(imperial): %dyd %d' %d\"\n", lengthInInches / 36, (lengthInInches % 36) / 12, (lengthInInches % 36) % 12);
    printf("Total length(metric): %.2f m\n", lengthInMeters);
}
