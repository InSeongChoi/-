//다른 나라의 확진자 수를 검색하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "head.h"
extern void readfile();
extern void searchfile(char region[]);
int main(void) {
	char region[SIZE];
	readfile();
	while (1) {
		printf("확진자 수를 검색하고 싶은 나라를 입력하시오.(Q 입력시 종료): ");
		scanf("%s", region);
		if (strcmp(region, "Q") == 0) {
			break;
		}
		else {
			searchfile(region);
		}
	}
}