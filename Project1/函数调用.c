#include <stdio.h>
int Max(int a, int b) {
	if (a < b) {
		return b;
	}
	return a;
}

int main() {
	int ret = Max(10, 20);
	printf("%d", ret);
 }