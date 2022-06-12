#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "head.h"

void readfile() {
    FILE* fp, *fp1;
    CV c1;
    fp1 = fopen("searchDB.txt", "w");
    fp = fopen("internet.txt", "r");
    if (fp != NULL) {
        while (!feof(fp)) {
            fgets(c1.country, SIZE, fp);
            strtok(c1.country, " ");
            c1.number = strtok(NULL, " ");
            fputs(c1.country , fp1);
            fputs(" ", fp1);
            fputs(c1.number, fp1);
        }
        fclose(fp);
        fclose(fp1);
    }
}