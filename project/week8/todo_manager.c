#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 사용자로부터 받은 할일 목록 저장
	int taskCount = 0; // 할일의 수를 저장하는 변수

	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		if (taskCount >= MAX_TASKS) {  // 할일이 할일의 최대치보다 크거나 같을때 종료
			printf("할일이 다 찼습니다.");  
			break;
		}
		// 사용자에게 메뉴를 출력, 사용자에게 입력값 받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5. 할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // 종료를 위한 flag
		int delIndex = -1;  // 할 일 삭제를 위한 index 저장 변수
		int changeIndex = -1; // 할 일 수정을 위한 index 저장 변수
		char ch; // 할 일 수정시 버퍼를 받기 위한 문자 변수

		// 입력에 따른 기능 수행
		switch (choice) {
		case 1:
			printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]);
			taskCount++;
			break;
		case 2:  // 할 일 삭제
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {  //사용자 입력값이 범위에서 벗어났을때
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// 비어 있는 값을 메우기 위해 위에 있는 값들 내리기
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1;
			}
			break;
		case 3:
			printf("할 일 목록\n");  // 할일의 목록 보여주기
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;
		case 4:
			terminate = 1;
			break;
		case 5:  // 할 일을 수정
			printf("수정할 할 일의 번호를 입력해주세요 (1부터 시작): ");
			scanf_s("%d", &changeIndex);
			if (changeIndex > taskCount || changeIndex <= 0) {
				printf("수정 범위가 벗어났습니다.\n");
			}
			else {
				printf("현재 내용: %s\n", tasks[changeIndex - 1]);
				printf("새로운 할 일 내용을 입력하세요 (공백 없이 입력하세요): ");
				scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
				printf("%d. 할 일이 수정되었습니다: %s\n", changeIndex, tasks[changeIndex - 1]);
			}
			break;
		default:  // 1~5 이외의 값을 사용자가 입력했을때 
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}

		

	}
}