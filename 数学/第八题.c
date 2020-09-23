#include <stdio.h>
#include <string.h>
  int main(){
	  char* a[]  = {"*************"};
	  char size = strlen(a);
	  for (int i = 0; i < (size + 1) / 2; i++) {
		  int left = (size + 1) / 2 - i - 1;
		  int right = (size + 1) / 2 + i - 1;
		  for (int b = left; b <= right; b++) {
			  printf("%s", a[b]);
		  }
	  }
	  return 0;
  }