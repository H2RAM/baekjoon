#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int count;
	scanf("%d", &count);
	char li[100];
	int con[100000];
	con[0] = -1;
	int pt = -1;
	int add;
	for (int i = 1; i <= count; i++) {
		scanf("%s", &li);
		if (!(strcmp(li, "pop"))) {
			if (pt == -1) {
				printf("-1\n");
			}
			else {
				printf("%d\n", con[pt]);
				pt--;
			}
		}
		if (!(strcmp(li, "push"))) {
			scanf("%d\n", &add);
			pt++;
			con[pt] = add;
		}
		if (!(strcmp(li, "size"))) {
			printf("%d\n", pt + 1);
		}
		if (!(strcmp(li, "empty"))) {
			if (pt == -1) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}
		if (!(strcmp(li, "top"))) {
			if (pt == -1) {
				printf("-1\n");
			}
			else {
				printf("%d\n", con[pt]);
			}
		}
			
	}
	return 0;
}
