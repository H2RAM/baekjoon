#include <stdio.h>

int main(void) {
	int hr;
	int min;
	scanf("%d %d", &hr, &min);
	min -= 45;
	if (min < 0) {
		--hr;
		min += 60;
	}
	if (hr < 0) {
		hr += 24;
	}
	
	printf("%d %d", hr, min);

	return 0;
}
