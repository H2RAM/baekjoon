#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

int main(void)
{
	int count;
	scanf("%d", &count);
	char li[10];
	queue<int> q;
	int a;
	int add;
	for (int i = 1; i <= count; i++) {
		scanf("%s", &li);
		if (!(strcmp(li, "pop"))) {
			if(!q.empty()){
				a = q.front();
				printf("%d\n", a);
				q.pop();
			}
			else {
				printf("-1\n");
			}
		}
		if (!(strcmp(li, "push"))) {
			scanf("%d\n", &add);
			q.push(add);
		}
		if (!(strcmp(li, "size"))) {
			printf("%d\n", q.size());
		}
		if (!(strcmp(li, "empty"))) {
			if (q.empty()) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}
		if (!(strcmp(li, "front"))) {
			if (!q.empty()) {
				printf("%d\n", q.front());
			}
			else {
				printf("-1\n");
			}
		}
		if (!(strcmp(li, "back"))) {
			if (!q.empty()) {
				printf("%d\n", q.back());
			}
			else{
				printf("-1\n");
			}
		
		}

	}
	return 0;
}
