#include <stdio.h>

int main()
{
	int floor;  //floor 변수 선언
	printf("몇 층을 쌓겠습니까? (5~100)");  // 몇층을 쌓을지 질문 출력 (범위 제시)
	scanf_s("%d", &floor);  // 사용자에게 몇층을 쌓을지 값 대입

	for (int i = 0; i < floor; i++) {  // 
		for (int j = 0; j < floor - 1 - i; j++) {  // fllor줄 -1-i 만큼 출력
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) {  // i *2+1 만큼 *을 출력
			printf("*");
		}
		printf("\n");  // 줄바꿈을 통해 피라미드를 만듦
	}
	return 0;	
}