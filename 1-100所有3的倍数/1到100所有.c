//#include <stdio.h>
//int main() {
//	for(int i = 1;i <= 100;i += 1)
//		if (i % 3 == 0){
//			printf("%d\n", i);
//			continue;
//		}
//	return 0;s
// }

#include <stdio.h>
int main() {
	int i = 1;
	while (i <= 100) {
		if (i % 3 != 0) {
			i += 1;
			continue;
		}

		printf("%d\n", i);
		i += 1;
	}
 }