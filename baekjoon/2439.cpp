#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int n = 1; n <= a-i; n++) {
			printf(" ");
		}
		for (int m = 1; m <= i; m++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
