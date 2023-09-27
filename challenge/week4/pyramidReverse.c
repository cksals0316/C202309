#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");  // 사용자에게 입력값
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {  // i 가 0보다 크다는 조건이 성립했을때 i는 1씩 감량
		for (int j = 0; j < floor - i; j++) {  // fllor - i 만큼 커진다
			printf("S");
		}
		for (int k = 0; k < i * 2 - 1; k++) {  // i*2-1 만큼 커진다.
			printf("*");
		}
		printf("\n");  // 줄바꿈

	}
	return 0;
}