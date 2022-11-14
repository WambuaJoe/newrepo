#ifndef HEADER_H
#define HEADER_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <math.h>


//Prototypes
int getInteger();
int checkPrimeNumber(int n);
float calcSuum(float numB[]);
float calcSum(float num[]);
void numberDisplay(int num[2][2]);


//Structures


//Functions
void goSouthEast(int *latitude, int *longitude);

#endif
