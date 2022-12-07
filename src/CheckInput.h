#ifndef CHECKINPUT_H
#define CHECKINPUT_H

#include <iostream>
#include <stdio.h>
#include <cstring>

#include <stdlib.h>

#define NC "\e[0m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YLWB "\e[43m"

using namespace std;

bool validBuilding(char*);
bool validNumber(char*, int i);
bool validRoomNumber(char*);
bool checkAns(char*, char*);

#endif