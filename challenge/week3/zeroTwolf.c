# include <stdio.h>

int main() {
	int num;  //변수선언
	printf("숫자를 입력하시오: ");  
	scanf_s("%d", &num);
	if (num == 0) {  //조건문 사용자가 대입했을때 각각의 알맞는 말을 프린트
		printf("zero");
	}
	else if (num == 1) {
		printf("one");
	}
	else if (num == 2) {
		printf("two");
	}
	else {
		printf("not 0 ~ 2");  //사용자가 조건에 맞지 않는 정수를 대입했을때 
	}
	return 0;
}