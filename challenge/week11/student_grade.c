#include <stdio.h>
#define STUDENTS 5  // �л����� �� ����

void classifyStudents(int* scores, char targetGrade) {  // �Լ� ����  // �����ͷ� ��ȯ
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {  // ���� ������ ���� ������ �޶����� ���ǹ�
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
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}

int sumScores(int* scores) {  // �Լ� ���� // �����ͷ� ��ȯ
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += *(scores + i);  // �л����� ������ ��ü ���ϱ�
	}
	return sum;
}

double averageScores(int* scores) { // �����ͷ� ��ȯ
	int sum = sumScores(scores);
	double average = (double)sum / (double)STUDENTS; // ���� ��� ���ϱ�
	return average;
}


void printRanks(int* scores) {  // �Լ� ���� // �����ͷ� ��ȯ
	for (int i = 0; i < STUDENTS; i++) {
		int j = STUDENTS;
		for (int k = 0; k < STUDENTS; k++) {
			if (*(scores + i) > *(scores + k)) {  //���� ��
				j--;  // ������ �ø���
			}
		}
		printf("%d �л��� ������ %d �Դϴ�.\n", i + 1, j);
	}
}

int main() {
	int scores[STUDENTS];  //������ ������ �迭 ����
	int* p = scores;
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);  //�л����� ���� �Է¹ޱ�
		scanf_s("%d", p);
		p++;
	}

	char ch = getchar();

	char target;
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);  //�л����� ���� �з� �� ���

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ� \n", sum, average);

	printRanks(scores);

	return 0;
}