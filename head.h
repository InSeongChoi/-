#pragma once
#ifndef SIZE
#define SIZE 100
#include <string.h>
void readfile();
void searchfile(char region[]);
typedef struct COVID {
    char country[100];
    char* number;
}CV;
#endif  