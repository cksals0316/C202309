#include <stdio.h>
#define STUDENTS 5  // 학생들의 수 정의

void classifyStudents(int* scores, char targetGrade) {  // 함수 정의  // 포인터로 변환
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {  // 일정 점수에 따라 성적이 달라지는 조건문
		if (*(scores + i) >= 90) {
			grade = 'A';
		}
		else if (*(scores + i) >= 80) {
			grade = 'B';
		}
		else if (*(scores + i) >= 70) {
			grade = 'C';
		}
		else if (*(scores + i) >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

int sumScores(int* scores) {  // 함수 선언 // 포인터로 변환
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += *(scores + i);  // 학생들의 점수를 전체 더하기
	}
	return sum;
}

double averageScores(int* scores) { // 포인터로 변환
	int sum = sumScores(scores);
	double average = (double)sum / (double)STUDENTS; // 점수 평균 구하기
	return average;
}


void printRanks(int* scores) {  // 함수 선언 // 포인터로 변환
	for (int i = 0; i < STUDENTS; i++) {
		int j = STUDENTS;
		for (int k = 0; k < STUDENTS; k++) {
			if (*(scores + i) > *(scores + k)) {  //점수 비교
				j--;  // 순위를 올리기
			}
		}
		printf("%d 학생의 순위는 %d 입니다.\n", i + 1, j);
	}
}

int main() {
	int scores[STUDENTS];  //성적을 저장할 배열 선언
	int* p = scores;
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);  //학생들의 성적 입력받기
		scanf_s("%d", p);
		p++;
	}

	char ch = getchar();

	char target;
	printf("특정 점수 (A, B, C, D, F)를 입력하시오");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);  //학생들의 성적 분류 및 출력

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다 \n", sum, average);

	printRanks(scores);

	return 0;
}