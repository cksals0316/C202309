//#include <stdio.h>
//#define STUDENTS 5  // 학생들의 수 정의
//
//void classifyStudents(int scores[], char targetGrade) {  // 함수 정의
//	printf("학생 성적 분류:\n");
//	char grade = ' ';
//	for (int i = 0; i < STUDENTS; i++) {  // 일정 점수에 따라 성적이 달라지는 조건문
//		if (scores[i] >= 90) {
//			grade = 'A';
//		}
//		else if (scores[i] >= 80) {
//			grade = 'B';
//		}
//		else if (scores[i] >= 70) {
//			grade = 'C';
//		}
//		else if (scores[i] >= 60) {
//			grade = 'D';
//		}
//		else {
//			grade = 'F';
//		}
//		if (targetGrade == grade) {
//			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
//		}
//	}
//}
//
//
//
//
//int main(){
//	int scores[STUDENTS];  //성적을 저장할 배열 선언
//
//	for (int i = 0; i < STUDENTS; i++) {
//		printf("학생 %d의 성적을 입력하세요: ", i + 1);  //학생들의 성적 입력받기
//		scanf_s("%d", &scores[i]);
//	}
//
//	char ch = getchar();
//
//	char target;
//	printf("특정 점수 (A, B, C, D, F)를 입력하시오");
//	scanf_s("%c", &target, 1);
//	
//	classifyStudents(scores, target);  //학생들의 성적 분류 및 출력
//
//	return 0;
//}