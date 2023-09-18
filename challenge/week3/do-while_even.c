#include <stdio.h>

int main() {
	int i = 0;  //선언
	do {
		i++;  //i값의 증가
		printf(" %d Hello World!\n", i++); 
		if (i % 2 == 0) {
			continue;
		}
	} while (i < 10);  //일반 while 문과 다르게 do를 먼저하고 씀
	return 0;
}

