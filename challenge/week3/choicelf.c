#include <stdio.h>

int main() {

	int choice;

	printf("1.파일저장\n");
	printf("2.저장 없이 닫기\n");
	printf("3.종료하기\n");
	printf("원하는 값을 입력하세요\n");
	scanf_s("%d" ,&choice);  //사용자에게 값을 입력요구

	if (choice==1) { // 조건문으로 사용자가 선택한 번호에 따라 프린트
		printf("파일을 저장합니다.\n");  
	}
	else if (choice == 2) {
		printf("저장 없이 닫습니다.\n");
	}
	else if (choice == 3) {
		printf("종료합니다.\n");
	}
	else {
		printf("잘못 입력하셨습니다.");  //사용자가 1~3 외에 번호를 대입했을때 프린트
	}
	return 0;
}