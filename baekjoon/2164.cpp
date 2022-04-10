#include <stdio.h>
#include <queue>
using namespace std;

int main(void) {
	int n;
	int a=1;
	int b;
	queue<int> q;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (q.size() > 1) {
		if (a % 2 == 0) {
			int b = q.front();
			q.pop();
			q.push(b);
		}
		else {
			q.pop();
		}
		a++;
	}
	printf("%d", q.front());

	return 0;
}
