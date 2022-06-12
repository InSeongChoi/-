#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "head.h"

void searchfile(char region[]) {
	FILE* fp3 = fopen("searchDB.txt", "r");
	CV c2;

	while (fgets(c2.country, SIZE, fp3)) {
		strtok(c2.country, " ");
		c2.number = strtok(NULL, " ");
		 if (strstr(c2.country, region)) {
			printf("%s의 확진자 수:%s", region, c2.number);
			}
		
	}
	fclose(fp3);
}
