#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stack>
using namespace std;

int main(void)
{
	stack<int> st;
	int a;
	int b;
	int c = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		if (b == 0) {
			if (!st.empty()) {
				st.pop();
			}
			
		}
		else {
			st.push(b);
		}
	}
	for (int n = 0; n < a; n++) {
		if (!st.empty()) {
			c += st.top();
			st.pop();
		}
	}
	printf("%d", c);
	return 0;
}
