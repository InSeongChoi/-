//�ٸ� ������ Ȯ���� ���� �˻��ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "head.h"
extern void readfile();
extern void searchfile(char region[]);
int main(void) {
	char region[SIZE];
	readfile();
	while (1) {
		printf("Ȯ���� ���� �˻��ϰ� ���� ���� �Է��Ͻÿ�.(Q �Է½� ����): ");
		scanf("%s", region);
		if (strcmp(region, "Q") == 0) {
			break;
		}
		else {
			searchfile(region);
		}
	}
}